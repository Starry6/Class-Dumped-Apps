@interface BDASifXBridgeSendLogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString labelName;
@property (nonatomic) NSNumber extValue;
@property (nonatomic) NSNumber value;
@property (nonatomic) NSDictionary extJson;
- (id)extJson;
- (id)extValue;
- (void)setExtJson:;
- (void)setExtValue:;
- (void)setValue:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)value;
- (id)labelName;
- (void)setLabelName:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
