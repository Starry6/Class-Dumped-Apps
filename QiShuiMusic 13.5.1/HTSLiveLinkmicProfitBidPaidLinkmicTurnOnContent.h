@interface HTSLiveLinkmicProfitBidPaidLinkmicTurnOnContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBidPaidLinkmicContent bidPaidLinkmicInfo;
@property (nonatomic) BOOL hasBidPaidLinkmicInfo;
@property (nonatomic) NSString prompts;
@property (nonatomic) BOOL waitingUserNeedLeave;
@property (nonatomic) NSString waitingUserToast;
+ (id)descriptor;
@end
