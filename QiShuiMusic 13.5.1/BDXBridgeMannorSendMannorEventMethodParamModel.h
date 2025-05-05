@interface BDXBridgeMannorSendMannorEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventAreaKey;
@property (nonatomic) NSString eventNameKey;
@property (nonatomic) NSDictionary extraData;
- (id)eventAreaKey;
- (id)eventNameKey;
- (void)setEventAreaKey:;
- (void)setEventNameKey:;
- (void).cxx_destruct;
- (void)setExtraData:;
- (id)extraData;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
