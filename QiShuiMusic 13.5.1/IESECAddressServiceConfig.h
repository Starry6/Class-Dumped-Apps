@interface IESECAddressServiceConfig : MTLModel
@property (nonatomic) IESECAddressServiceConfigAddressStrategy strategy;
@property (nonatomic) IESECAddressServiceAddressNotifyDialogConfig notifyDialogConfig;
@property (nonatomic) IESECAddressServiceAddressUpdateConfig addressUpdateConfig;
@property (nonatomic) IESECAddressServiceLocationConfig locateConfig;
@property (nonatomic) NSArray hookSchemaList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addressUpdateConfig;
- (id)hookSchemaList;
- (id)locateConfig;
- (id)notifyDialogConfig;
- (void)setAddressUpdateConfig:;
- (void)setHookSchemaList:;
- (void)setLocateConfig:;
- (void)setNotifyDialogConfig:;
- (id)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
+ (id)hookSchemaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
