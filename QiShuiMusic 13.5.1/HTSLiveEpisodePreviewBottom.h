@interface HTSLiveEpisodePreviewBottom : IESLivePBBaseMessage
@property (nonatomic) NSString watchPeriodStr;
@property (nonatomic) NSString latestPeriodStr;
+ (id)descriptor;
@end
