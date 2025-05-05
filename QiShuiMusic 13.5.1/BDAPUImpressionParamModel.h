@interface BDAPUImpressionParamModel : BDXBridgeModel
@property (nonatomic) NSString SKANParameters;
@property (nonatomic) NSDictionary eventParameters;
- (id)SKANParameters;
- (void)setSKANParameters:;
- (void).cxx_destruct;
- (id)eventParameters;
- (void)setEventParameters:;
+ (id)JSONKeyPathsByPropertyKey;
@end
