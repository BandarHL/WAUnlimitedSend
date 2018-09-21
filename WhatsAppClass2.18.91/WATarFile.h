//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WATarFile : NSObject
{
    NSMutableArray *_processors;
    void *_bytes;
    _Bool _ignoreMissingFiles;
    unsigned long long _mode;
    CDUnknownBlockType _fileCompletionHandler;
    NSString *_prefix;
    NSFileHandle *_handle;
}

+ (_Bool)doesHeaderFitAtOffset:(unsigned long long)arg1 forFileSize:(unsigned long long)arg2;
+ (_Bool)isOffset:(unsigned long long)arg1 validForSize:(unsigned long long)arg2;
+ (_Bool)fileForHeader:(id)arg1 fitsInTar:(unsigned long long)arg2 withOffset:(unsigned long long)arg3;
+ (_Bool)file:(id)arg1 matchesHeader:(id)arg2;
+ (id)handleToPath:(id)arg1 forMode:(unsigned long long)arg2;
+ (void)preparePath:(id)arg1 forMode:(unsigned long long)arg2;
@property(readonly, nonatomic) NSFileHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) CDUnknownBlockType fileCompletionHandler; // @synthesize fileCompletionHandler=_fileCompletionHandler;
@property(nonatomic) _Bool ignoreMissingFiles; // @synthesize ignoreMissingFiles=_ignoreMissingFiles;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)addEOF;
- (id)addFilesAtURLs:(id)arg1 toTarDirectoryPath:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (id)addFilesAtURLs:(id)arg1;
- (void)notifyDidFinishHeader:(id)arg1 withResult:(unsigned long long)arg2;
- (void)notifyDidStartHeader:(id)arg1;
- (unsigned long long)internalAddFileAtPath:(id)arg1 atTarDirectoryPath:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (unsigned long long)addFileWithHeader:(id)arg1 fromHandle:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (unsigned long long)addBytesFromHandle:(id)arg1 ofLength:(unsigned long long)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (id)headerForPath:(id)arg1 inTarDirectoryPath:(id)arg2;
- (id)nameForFilePath:(id)arg1 inTarDirectoryPath:(id)arg2;
- (void)addProcessor:(id)arg1;
- (void)finish;
- (void)close;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 mode:(unsigned long long)arg2 appendToEOF:(_Bool)arg3;
- (id)initWithHandle:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 mode:(unsigned long long)arg2;
- (id)init;

@end
