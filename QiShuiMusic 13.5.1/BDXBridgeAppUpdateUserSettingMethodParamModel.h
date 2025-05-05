@interface BDXBridgeAppUpdateUserSettingMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString item;
@property (nonatomic) NSString value;
@property (nonatomic) NSString errorPrompt;
- (void)setErrorPrompt:;
- (id)errorPrompt;
- (id)item;
- (void)setItem:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
