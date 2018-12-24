//
//  BHSettingViewController.m
//  WAUnlimitedSend
//
//  Created by BandarHelal on 21/12/2018.
//

#import "BHSettingViewController.h"
#import "FRPreferences/FRPrefs.h"
#import "SCLAlertView/SCLAlertView.h"


@implementation BHSettingViewController

- (void)loadBHSettingPrefsOnViewController:(UIViewController *)viewController {
    NSURL *profileimage = [[NSURL alloc] initWithString:@"https://twitter.com/BandarHL/profile_image?size=bigger"];
    NSURL *profileimage2 = [[NSURL alloc] initWithString:@"https://twitter.com/fahadaljuwausri/profile_image?size=bigger"];
    FRPSection *HeaderSection = [FRPSection sectionWithTitle:@"Preferences" footer:nil];
    
    FRPSwitchCell *sendswitch = [FRPSwitchCell cellWithTitle:@"Enable" setting:[FRPSettings settingsWithKey:@"unlimitedVideo" defaultValue:@NO] postNotification:nil changeBlock:^(UISwitch *sender) {
        if ([sender isOn]) {
            SCLAlertView *SCalert = [[SCLAlertView alloc] initWithNewWindow];
            SCalert.backgroundType = SCLAlertViewBackgroundBlur;
            [SCalert addButton:@"Relaunch WhatsApp" actionBlock:^ {
                exit(0);
            }];
            [SCalert showNotice:@"WAUnlimitedSend" subTitle:@"You need Relaunch WhatsApp to apply changes" closeButtonTitle:@"Later" duration:0.0f];
        } else {
            SCLAlertView *SCalert = [[SCLAlertView alloc] initWithNewWindow];
            SCalert.backgroundType = SCLAlertViewBackgroundBlur;
            [SCalert addButton:@"Relaunch WhatsApp" actionBlock:^ {
                exit(0);
            }];
            [SCalert showNotice:@"WAUnlimitedSend" subTitle:@"You need Relaunch WhatsApp to apply changes" closeButtonTitle:@"Later" duration:0.0f];
        }
    }];
    
    
    
    FRPSection *DevSection = [FRPSection sectionWithTitle:nil footer:nil];
    
    FRPDeveloperCell *BandarHL = [FRPDeveloperCell cellWithTitle:@"BandarHelal" detail:@"BandarHL" image:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:profileimage]] url:@"https://twitter.com/BandarHL"];
    
    FRPDeveloperCell *Fahad = [FRPDeveloperCell cellWithTitle:@"Fahad" detail:@"@fahadaljuwausri" image:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:profileimage2]] url:@"https://twitter.com/fahadaljuwausri"];
    
    FRPDeveloperCell *paypal = [FRPDeveloperCell cellWithTitle:@"Donate via paypal" detail:@"PayPal" image:[UIImage imageNamed:@"WAS.bundle/PrefsDonate.png"] url:@"https://www.paypal.me/fjr699"];
    
    
    
    [HeaderSection addCell:sendswitch];
    [DevSection addCell:BandarHL];
    [DevSection addCell:Fahad];
    [DevSection addCell:paypal];
    
    
    FRPreferences *table = [FRPreferences tableWithSections:@[HeaderSection,DevSection] title:@"WAUnlimitedSend" tintColor:nil];
    [viewController.navigationController pushViewController:table animated:YES];
    if (@available(iOS 11.0, *)) {
        viewController.navigationController.navigationBar.prefersLargeTitles = false;
    } else {
        // Fallback on earlier versions
    }
    
}

@end
