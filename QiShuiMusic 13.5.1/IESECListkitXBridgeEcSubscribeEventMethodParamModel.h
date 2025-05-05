@interface IESECListkitXBridgeEcSubscribeEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSNumber clearExistEvent;
- (id)clearExistEvent;
- (void)setClearExistEvent:;
- (void)setTimestamp:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)timestamp;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
