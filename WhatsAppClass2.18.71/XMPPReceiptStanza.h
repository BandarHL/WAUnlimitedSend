//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPStanza.h"

__attribute__((visibility("hidden")))
@interface XMPPReceiptStanza : XMPPStanza
{
}

+ (unsigned long long)typeForString:(id)arg1;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringsForTypes;
- (id)log;
@property(nonatomic) unsigned long long type;
- (id)initWithType:(unsigned long long)arg1;

@end
