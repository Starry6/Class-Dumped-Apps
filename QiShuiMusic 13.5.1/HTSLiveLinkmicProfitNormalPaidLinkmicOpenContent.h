@interface HTSLiveLinkmicProfitNormalPaidLinkmicOpenContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveNormalPaidLinkmicInfo normalPaidLinkmicInfo;
@property (nonatomic) BOOL hasNormalPaidLinkmicInfo;
@property (nonatomic) BOOL waitingUserNeedLeave;
@property (nonatomic) NSString waitingUserToast;
@property (nonatomic) NSInteger source;
+ (id)descriptor;
@end
