@interface BDAPUSendLogV3ParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
