//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface XMPPBusinessHoursConfig : NSObject
{
    NSString *_day;
    NSString *_mode;
    NSNumber *_openTime;
    NSNumber *_closeTime;
}

@property(readonly, nonatomic) NSNumber *closeTime; // @synthesize closeTime=_closeTime;
@property(readonly, nonatomic) NSNumber *openTime; // @synthesize openTime=_openTime;
@property(readonly, copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *day; // @synthesize day=_day;
- (void).cxx_destruct;
- (id)initWithConfigElement:(id)arg1;

@end
