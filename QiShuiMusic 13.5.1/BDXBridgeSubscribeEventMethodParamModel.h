@interface BDXBridgeSubscribeEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSNumber timestamp;
- (void)setTimestamp:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)timestamp;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
