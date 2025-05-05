@interface TKTokenConfiguration : NSObject
@property (nonatomic) TKTokenID tokenID;
@property (nonatomic) NSString instanceID;
@property (nonatomic) NSData configurationData;
@property (nonatomic) NSArray keychainItems;
- (id)instanceID;
- (id)beginTransaction;
- (id)tokenID;
- (id)configurationData;
- (void).cxx_destruct;
- (void)setConfigurationData:;
- (id)initWithTokenID:configurationConnection:;
- (id)keychainItems;
- (void)setKeychainItems:;
- (id)keyForObjectID:error:;
- (id)certificateForObjectID:error:;
+ (id)interfaceForProtocol;
+ (BOOL)_hasSeparateKeysAndCertificatesObjectIDSpace;
+ (void)set_hasSeparateKeysAndCertificatesObjectIDSpace:;
@end
