//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPStanzaElement.h>

@interface XMPPStanzaElement (WACallManager)
+ (id)voipCapabilityStanzaWithCapability:(struct wa_call_voip_capability_t *)arg1;
- (void)fillVoipRelayElection:(CDStruct_28296d11 *)arg1;
- (void)fillVoipRelayLatencies:(CDStruct_35227113 *)arg1;
- (void)fillVoipRelayInfo:(struct wa_call_relay *)arg1;
- (void)fillVoipGroupInfo:(struct wa_call_group_info *)arg1;
- (void)fillVoipCapability:(struct wa_call_voip_capability_t *)arg1;
- (void)fillVoipTransportCandidates:(CDStruct_bc3eea8d *)arg1;
@property(readonly, nonatomic, getter=isLarge) _Bool large;
@end
