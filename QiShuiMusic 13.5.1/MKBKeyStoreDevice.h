@interface MKBKeyStoreDevice : NSObject
- (id)getFileHandleForData:;
- (int)Event:;
- (id)_CreateMKBServerConnection;
- (int)changeSystemSecretFromOldPasscode:ToNew:withOpaqueData:;
- (int)changeClassKeysGenerationWithSecret:withGenerationOption:;
- (id)copySytemSecretBlob;
- (id)getBackupkeyForVolume:andCryptoID:withreturnValue:;
- (int)ChangeSystemSecretWithEscrow:FromOldPasscode:ToNew:withOpaqueDats:withKeepState:;
- (int)registerOTABackup:withSecret:;
- (int)startBackupSessionForVolume:;
- (int)stopBackupSessionForVolume:;
- (int)enableBackupForVolume:withSecret:bagData:;
- (int)disableBackupForVolume:;
- (int)backupUUIDForVolume:bagUUID:;
- (int)passcodeUnlockStart;
- (int)passcodeUnlockSuccess;
- (int)passcodeUnlockFailed;
- (id)getLockStateForUser:;
- (BOOL)getDeviceLockStateForUser:extendedState:withLockStateInfo:;
- (int)stashCreateWithSecret:withMode:withUID:WithFlags:;
- (int)stashCommit:WithFlags:;
- (int)stashDestroy;
- (int)stashVerifywithValidity:WithUID:WithFlags:;
- (int)isKeyRollingWithKeyStatus:;
- (int)migrateFS;
- (int)SeshatEnroll:;
- (int)SeshatUnlock:;
- (int)SeshatRecover:;
- (int)SeshatDebug:;
- (int)createKeybagForUserSession:withSessionUID:WithSecret:withGracePeriod:withOpaqeStuff:;
- (int)loadKeybagForUserSession:withSessionID:withSecret:shouldSetGracePeriod:withGracePeriod:isInEarlyStar:;
- (int)unloadKeybagForUserSession:;
- (int)deleteKeybagForUserSession:;
- (int)setVolumeToPersona:withPersonaString:;
- (int)createSyncBagForUserSession:withSessionUID:;
- (int)loadSyncBagForUserSession:withSessionUID:;
- (int)verifySyncBagForUserSession:withSessionUID:;
- (int)unloadSyncBagForUserSession:withSessionUID:;
- (int)removeSyncBagForUserSession:withSessionUID:;
- (int)addPersonaKeyForUserSession:withSecret:withPersonaUUIDString:forPath:;
- (int)removePersonaKeyForUserSession:withPersonaUUIDString:withVolumeUUIDString:;
+ (id)sharedService;
@end
