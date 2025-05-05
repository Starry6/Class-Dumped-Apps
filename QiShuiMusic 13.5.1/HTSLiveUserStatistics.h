@interface HTSLiveUserStatistics : IESLivePBBaseMessage
@property (nonatomic) q watchDuration;
@property (nonatomic) float watchRatio;
@property (nonatomic) q watchStatTime;
@property (nonatomic) NSString watchPeriod;
@property (nonatomic) NSString watchEpisodeId;
+ (id)descriptor;
@end
