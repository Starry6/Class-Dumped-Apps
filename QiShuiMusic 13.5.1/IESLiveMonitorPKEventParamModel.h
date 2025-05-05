@interface IESLiveMonitorPKEventParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber eventType;
@property (nonatomic) NSDictionary eventParams;
- (void)setEventParams:;
- (id)eventType;
- (void)setEventType:;
- (void).cxx_destruct;
- (id)eventParams;
+ (id)modelCustomPropertyMapper;
@end
