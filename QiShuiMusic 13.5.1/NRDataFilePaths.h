@interface NRDataFilePaths : NSObject
+ (id)_pathToSecureDevicePropertiesFile;
+ (id)_pathToNanoRegistryStateDirectory;
+ (id)pathToNanoRegistryUDIDFile;
+ (id)_pathToRecoveryStateFile;
+ (id)_pathToNanoRegistryPairingStorePathDirectory;
+ (id)pathToNanoRegistryHistoryFile;
+ (id)_pathToDevicePropertiesFile;
+ (id)pathToNanoRegistryStateDirectory;
+ (id)_pathToUnpairTriggerFile;
+ (id)pathToNanoRegistryHistoryRecoveryManagerFile:;
+ (id)_pathToNanoRegistryUnpairTriggerFileDirectory;
+ (id)pathToNanoRegistryMigrationRoutingSlip;
+ (id)pathToNanoRegistryClassAFile;
+ (id)pathToNanoRegistryHistorySecurePropertiesFile;
@end
