//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventICloudRestore : WamEvent
{
    NSNumber *_icloud_restore_result_number;
    NSNumber *_icloud_restore_start_reason_number;
    double _icloud_restore_version;
    double _icloud_restore_integrity_check_result;
    double _icloud_download_t;
    double _icloud_extract_t;
    double _icloud_size;
}

@property(nonatomic) double icloud_size; // @synthesize icloud_size=_icloud_size;
@property(nonatomic) double icloud_extract_t; // @synthesize icloud_extract_t=_icloud_extract_t;
@property(nonatomic) double icloud_download_t; // @synthesize icloud_download_t=_icloud_download_t;
@property(nonatomic) double icloud_restore_integrity_check_result; // @synthesize icloud_restore_integrity_check_result=_icloud_restore_integrity_check_result;
@property(nonatomic) double icloud_restore_version; // @synthesize icloud_restore_version=_icloud_restore_version;
- (void).cxx_destruct;
@property(nonatomic) long long icloud_restore_start_reason;
- (_Bool)is_icloud_restore_start_reason_set;
@property(nonatomic) long long icloud_restore_result;
- (_Bool)is_icloud_restore_result_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
