//
//  BHTableView.m
//
//  Created by BandarHelal on 2/16/18.
//
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

@interface WAMessage : NSObject
@property(retain, nonatomic) NSString *text; // @dynamic text;
@end

@interface WAChatCellData : NSObject
- (id)message;
@end

@interface WAMessageCell : UITableViewCell
@property(readonly, nonatomic) WAChatCellData *cellData; // @synthesize cellData=_cellData;
- (id)referenceViewForPopupMenu;
- (CGRect)targetRectForPopupMenu;
- (id)popUpMenuItems;
- (void)willShowPopupMenu;
- (id)starMessagePopupMenuItemWithAction:(SEL)arg1;
- (id)parentMessageCell;
@end

@interface WAChatBar : UIView
@property(retain, nonatomic) WAMessage *quotedMessage;
@end

@interface WAChatBarManagerImpl : NSObject
@property(retain, nonatomic) WAMessage *quotedMessage;
@end

@interface ChatViewController : UIViewController
@end

@interface WAMessageReplyContext : NSObject
@property(readonly, copy, nonatomic) WAMessage *quotedMessage;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString;
@end

@interface WAMessageCellReplyContextView : UIView
@end

@interface WATableRow : NSObject
{
    _Bool _editable;
    _Bool _disabled;
    id _editHandler;
    id _handler;
    UITableViewCell *_cell;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;

@end

@interface WATableSection : NSObject
{
    NSMutableArray *_rows;
    NSString *_headerText;
    NSString *_footerText;
}

@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (void)deleteRow:(id)arg1;
- (id)addTableRowWithCellStyle:(long long)arg1;
- (id)addDefaultTableRow;
- (void)addRow:(id)arg1;
- (id)init;

@end

@interface WAStaticTableViewController : UITableViewController
{
    NSMutableArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)deselectActiveCell;
- (void)wa_fontSizeDidChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (id)addSection;
- (void)setupTableView;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

@end

@interface WAStaticTableViewController (WASendAny9)
- (WATableSection *)addSectionAtTop;
@end

@interface DebugViewController : WAStaticTableViewController
- (id)init;
@end

@interface WASettingsViewController : WAStaticTableViewController
@end

@implementation ViewController
@end
