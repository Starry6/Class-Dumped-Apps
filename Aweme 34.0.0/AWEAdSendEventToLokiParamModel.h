@interface AWEAdSendEventToLokiParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (id)params;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
