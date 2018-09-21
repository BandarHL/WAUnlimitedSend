//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAMMSBaseTaskResumePolicy : NSObject
{
    _Bool _progressMade;
    _Bool _useIP;
    unsigned long long _retryCount;
}

+ (id)policyFromError:(id)arg1 retryCount:(unsigned long long)arg2 progressMade:(_Bool)arg3;
@property(readonly, nonatomic) _Bool useIP; // @synthesize useIP=_useIP;
@property(readonly, nonatomic) _Bool progressMade; // @synthesize progressMade=_progressMade;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (id)initWithRetryCount:(unsigned long long)arg1 progressMade:(_Bool)arg2 useIP:(_Bool)arg3;

@end
