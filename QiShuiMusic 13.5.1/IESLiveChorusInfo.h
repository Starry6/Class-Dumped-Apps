@interface IESLiveChorusInfo : IESLivePBBaseMessage
@property (nonatomic) q chorusId;
@property (nonatomic) q leadSingerId;
@property (nonatomic) q startTime;
@property (nonatomic) q finishTime;
@property (nonatomic) NSString leadSingerOpenId;
+ (id)descriptor;
@end
