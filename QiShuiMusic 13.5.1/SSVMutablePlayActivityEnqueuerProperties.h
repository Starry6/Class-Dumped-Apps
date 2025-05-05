@interface SSVMutablePlayActivityEnqueuerProperties : SSVPlayActivityEnqueuerProperties
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString deviceGUID;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSNumber privateListeningEnabled;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) q systemReleaseType;
@property (nonatomic) BOOL SBEnabled;
@property (nonatomic) Q storeAccountID;
@property (nonatomic) NSString storeFrontID;
- (void)setBuildVersion:;
- (void)setTimeZone:;
- (void)setDeviceName:;
- (void)setPrivateListeningEnabled:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setStoreAccountID:;
- (void)setDeviceGUID:;
- (void)setSBEnabled:;
- (void)setStoreFrontID:;
- (void)setSystemReleaseType:;
@end
