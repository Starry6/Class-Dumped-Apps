@interface NSPersistentCloudKitContainerOptions : NSObject
@property (nonatomic) BOOL useEncryptedStorage;
@property (nonatomic) BOOL useDeviceToDeviceEncryption;
@property (nonatomic) NSString apsConnectionMachServiceName;
@property (nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> progressProvider;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) q databaseScope;
- (long long)databaseScope;
- (void)setProgressProvider:;
- (BOOL)useEncryptedStorage;
- (void)setUseDeviceToDeviceEncryption:;
- (id)progressProvider;
- (BOOL)useDeviceToDeviceEncryption;
- (void)setDatabaseScope:;
- (id)containerIdentifier;
- (void)dealloc;
- (void)setUseEncryptedStorage:;
- (void)setApsConnectionMachServiceName:;
- (id)initWithContainerIdentifier:;
- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
@end
