@interface BDXBridgePublishEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) BOOL isBroadcast;
- (void)setTimestamp:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)params;
- (BOOL)isBroadcast;
- (void)setParams:;
- (void)setIsBroadcast:;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
