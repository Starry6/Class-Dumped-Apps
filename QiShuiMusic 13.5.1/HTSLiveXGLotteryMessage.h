@interface HTSLiveXGLotteryMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) LotteryInfo lotteryInfo;
@property (nonatomic) BOOL hasLotteryInfo;
+ (id)descriptor;
@end
