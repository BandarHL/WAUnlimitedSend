//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WACDSticker;

__attribute__((visibility("hidden")))
@interface WACDStickerEvent : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *fileHash; // @dynamic fileHash;
@property(retain, nonatomic) WACDSticker *sticker; // @dynamic sticker;
@property(copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property(nonatomic) long long type; // @dynamic type;

@end
