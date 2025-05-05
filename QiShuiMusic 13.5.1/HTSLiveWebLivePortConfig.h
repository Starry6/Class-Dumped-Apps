@interface HTSLiveWebLivePortConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger strategyType;
@property (nonatomic) BOOL useConfigDuration;
@property (nonatomic) NSString pauseMonitorDuration;
+ (id)descriptor;
@end
