@interface IESLiveReportAppLogParamModel : IESLiveBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString noPrefix;
- (id)noPrefix;
- (void)setNoPrefix:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)modelCustomPropertyMapper;
@end
