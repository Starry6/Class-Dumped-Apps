@interface IESECXBridgeEcNegfeedbackClickMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber type;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSNumber itemType;
- (id)feedbackString;
- (void)setItemType:;
- (void)setType:;
- (id)itemType;
- (id)type;
- (void).cxx_destruct;
- (id)itemId;
- (void)setItemId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
