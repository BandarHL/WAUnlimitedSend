//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAutoMigratingStorage.h"

@class NSData, NSManagedObjectContext;
@protocol WASignalKeyStoreDelegate;

__attribute__((visibility("hidden")))
@interface WASignalKeyStore : WAAutoMigratingStorage
{
    NSManagedObjectContext *_deferredSaveMOC;
    NSData *_identityKeypairData;
    NSData *_registrationIdData;
    id <WASignalKeyStoreDelegate> _delegate;
}

+ (id)baseKeychainQuery;
@property(nonatomic) __weak id <WASignalKeyStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSData *registrationIdData; // @synthesize registrationIdData=_registrationIdData;
@property(readonly, nonatomic) NSData *identityKeypairData; // @synthesize identityKeypairData=_identityKeypairData;
- (void).cxx_destruct;
- (int)fetchFromKeychainIdentityKeypairData:(out id *)arg1 registrationIdData:(out id *)arg2 withBaseKeychainQuery:(id)arg3;
- (_Bool)keyChainAccessible;
- (int)performKeychainMigration;
- (int)clearKeychain;
- (int)saveToKeychainIdentityKeypairData:(id)arg1 registrationIdData:(id)arg2;
- (int)fetchFromKeychainIdentityKeypairData:(out id *)arg1 registrationIdData:(out id *)arg2;
- (void)clearKeychainStore;
- (void)dropKeychainStore;
- (_Bool)loadKeychainStore;
- (void)setActiveSignedPrekeyId:(int)arg1;
- (id)activeSignedPrekeyId;
- (double)signedPrekeyRotationInterval;
- (_Bool)saveContext:(id)arg1;
- (void)performContextBlockAndWait:(CDUnknownBlockType)arg1;
- (id)sortedPrekeyRecordsForIds:(id)arg1;
- (id)unsentPreKeyRecords:(unsigned long long)arg1;
- (void)setLastSentPreKeyId:(int)arg1;
- (int)lastSentPreKeyId;
- (void)setLastPreKeyId:(int)arg1;
- (int)lastPreKeyId;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (void)handleDatabaseContext:(id)arg1 queryError:(id)arg2;
- (_Bool)needsDatabaseMigrationForMetadata:(id)arg1;
- (void)deleteDatabase;
- (void)dropDatabase;
- (_Bool)loadDatabase;
- (void)performBatchContextBlock:(CDUnknownBlockType)arg1;
- (void)fetchIdentityKeypairData:(out id *)arg1 registrationIdData:(out id *)arg2;
- (void)setIdentityKeypairData:(id)arg1 registrationIdData:(id)arg2;
- (id)initWithStoreURL:(id)arg1;
- (int)deleteSenderKeyRecordForName:(const struct signal_protocol_sender_key_name *)arg1;
- (void)senderKeyRecordForName:(const struct signal_protocol_sender_key_name *)arg1 keyData:(id *)arg2 creationDate:(id *)arg3;
- (_Bool)storeSenderKey:(id)arg1 senderKeyName:(const struct signal_protocol_sender_key_name *)arg2;
- (_Bool)isTrustedIdentity:(id)arg1 forSignalAddress:(const struct signal_protocol_address *)arg2;
- (id)identityKeyForRecipientName:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)storeIdentity:(id)arg1 forRecipientId:(long long)arg2;
- (_Bool)storeIdentity:(id)arg1 signalAddress:(const struct signal_protocol_address *)arg2;
- (void)clearIdentityForRecipientId:(long long)arg1;
- (int)deleteAllSessionsForRecipientName:(const char *)arg1 length:(unsigned long long)arg2;
- (int)deleteSessionForRecipient:(const struct signal_protocol_address *)arg1;
- (_Bool)containsSessionForRecipient:(const struct signal_protocol_address *)arg1;
- (_Bool)storeSessionRecord:(id)arg1 recipient:(const struct signal_protocol_address *)arg2;
- (id)timeForSessionWithRecipientId:(long long)arg1 deviceId:(int)arg2;
- (id)sessionRecordForRecipient:(const struct signal_protocol_address *)arg1;
- (void)signedPrekeyRecord:(out id *)arg1 creationDate:(out id *)arg2 forPrekeyId:(int)arg3;
- (_Bool)removeSignedPreKeyRecordWithId:(int)arg1;
- (_Bool)containsSignedPreKeyRecordWithId:(int)arg1;
- (_Bool)storeSignedPreKeyRecord:(id)arg1 prekeyId:(int)arg2 creationDate:(id)arg3;
- (void)activeSignedPrekeyData:(out id *)arg1 creationDate:(id *)arg2;
- (id)signedPreKeyRecordForId:(int)arg1;
- (_Bool)removePreKeyRecordWithId:(int)arg1;
- (_Bool)containsPreKeyRecordWithId:(int)arg1;
- (_Bool)storePreKeyRecord:(id)arg1 id:(int)arg2;
- (id)preKeyRecordForId:(int)arg1;
- (_Bool)saveEphemeralPrekeys:(id)arg1;
- (void)clearOldDecryptJournalData;
- (id)decryptJournalsForJournalIds:(id)arg1 inContext:(id)arg2;
- (id)fetchDecryptJournalDataForJournalId:(id)arg1;
- (void)deleteJournaledDataForJournalIds:(id)arg1;
- (_Bool)saveToDecryptJournalData:(id)arg1 journalId:(id)arg2;
- (void)clearOldMessageBaseKeys;
- (void)deleteMessageBaseKeyForMessageWithStanzaId:(id)arg1 chatJid:(id)arg2 participantJid:(id)arg3;
- (void)saveMessageBaseKey:(id)arg1 forMessageWithStanzaId:(id)arg2 chatJid:(id)arg3 participantJid:(id)arg4 createIfNecessary:(_Bool)arg5;
- (_Bool)checkBaseKey:(id)arg1 forMessageWithStanzaId:(id)arg2 chatJid:(id)arg3 participantJid:(id)arg4;
- (void)clearOldSignedPreKeys;
- (_Bool)needsSignedPrekeyRotation;
- (id)fetchIdentityPublicKeyDataForUserJid:(id)arg1;
- (void)deleteSenderKeyForSignalAddress:(id)arg1;
- (void)markUserJid:(id)arg1 didReceiveLocalSenderKey:(_Bool)arg2 forGroup:(id)arg3;
- (id)fetchWASenderKeysForGroup:(id)arg1 onlyEligibleReceivers:(_Bool)arg2 inContext:(id)arg3;
- (void)markAllSenderKeysForGroup:(id)arg1 didReceiveLocalSenderKey:(_Bool)arg2;
- (void)updateGroup:(id)arg1 withActiveParticipants:(id)arg2;
- (id)jidsHavingLocalSenderKeyForGroup:(id)arg1;
- (id)jidsNeedingLocalSenderKeyForGroup:(id)arg1;
- (id)containsSessionsForJids:(id)arg1;

@end
