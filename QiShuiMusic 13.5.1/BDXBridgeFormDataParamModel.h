@interface BDXBridgeFormDataParamModel : BDXBridgeModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)key;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
+ (id)formDataParamWithKey:andValue:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
