@interface BDXBridgeThirdPartyAuthMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString platform;
@property (nonatomic) NSNumber enableCancel;
@property (nonatomic) NSNumber checkBinding;
- (id)checkBinding;
- (void)setCheckBinding:;
- (void)setPlatform:;
- (id)platform;
- (void).cxx_destruct;
- (id)enableCancel;
- (void)setEnableCancel:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
