@interface HTSLiveQuizBoxInfo : IESLivePBBaseMessage
@property (nonatomic) q boxId;
@property (nonatomic) q status;
@property (nonatomic) q countdownTime;
@property (nonatomic) q score;
@property (nonatomic) q totalTime;
+ (id)descriptor;
@end
