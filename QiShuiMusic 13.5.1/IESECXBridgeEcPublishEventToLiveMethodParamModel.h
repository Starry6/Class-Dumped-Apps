@interface IESECXBridgeEcPublishEventToLiveMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSNumber isBroadcast;
@property (nonatomic) NSDictionary params;
- (void)setTimestamp:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)params;
- (id)isBroadcast;
- (void)setParams:;
- (void)setIsBroadcast:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
