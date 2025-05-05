@interface BDMannorShowToastParamModel : BDXBridgeModel
@property (nonatomic) NSString message;
@property (nonatomic) NSString type;
@property (nonatomic) NSString icon;
- (void)setMessage:;
- (id)icon;
- (void)setType:;
- (id)type;
- (id)message;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
