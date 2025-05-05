@interface HTSLiveLinkmicProfitNormalPaidLinkmicConfigUpdateContent : IESLivePBBaseMessage
@property (nonatomic) BOOL waitingUserNeedLeave;
@property (nonatomic) NSString waitingUserToast;
@property (nonatomic) IESLiveNormalPaidLinkmicInfo normalPaidLinkmicInfo;
@property (nonatomic) BOOL hasNormalPaidLinkmicInfo;
+ (id)descriptor;
@end
