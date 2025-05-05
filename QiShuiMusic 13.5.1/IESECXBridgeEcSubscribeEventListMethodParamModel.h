@interface IESECXBridgeEcSubscribeEventListMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSNumber clearExistEvent;
@property (nonatomic) NSArray eventList;
- (id)clearExistEvent;
- (id)eventList;
- (void)setClearExistEvent:;
- (void)setEventList:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
