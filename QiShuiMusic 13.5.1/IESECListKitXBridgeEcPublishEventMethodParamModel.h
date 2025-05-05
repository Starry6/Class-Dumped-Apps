@interface IESECListKitXBridgeEcPublishEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSNumber isBroadcast;
@property (nonatomic) NSNumber isGlobal;
@property (nonatomic) NSNumber isSticky;
@property (nonatomic) NSDictionary params;
- (void)setIsGlobal:;
- (void)setIsSticky:;
- (void)setTimestamp:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)params;
- (id)isSticky;
- (id)isBroadcast;
- (void)setParams:;
- (void)setIsBroadcast:;
- (id)isGlobal;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
