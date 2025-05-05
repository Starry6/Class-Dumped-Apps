@interface HTSLiveEpisodePremierePlay : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray highlightsArray;
@property (nonatomic) Q highlightsArray_Count;
@property (nonatomic) NSInteger playType;
@property (nonatomic) q startTime;
@property (nonatomic) NSString playText;
@property (nonatomic) q textDuration;
+ (id)descriptor;
@end
