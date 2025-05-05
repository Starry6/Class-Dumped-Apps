@interface BDXBridgeSetUserDomainStorageItemMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString key;
@property (nonatomic) @ data;
@property (nonatomic) NSNumber expiredTime;
@property (nonatomic) BOOL enableAppIdIsolation;
- (void)setExpiredTime:;
- (BOOL)enableAppIdIsolation;
- (id)expiredTime;
- (void)setEnableAppIdIsolation:;
- (id)data;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
- (void)setData:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
