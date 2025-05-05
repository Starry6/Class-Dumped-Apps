@interface HTSLiveLinkmicProfitBidPaidLinkmicStartContent : IESLivePBBaseMessage
@property (nonatomic) NSString startToast;
@property (nonatomic) NSMutableArray positionsArray;
@property (nonatomic) Q positionsArray_Count;
@property (nonatomic) BOOL waitingUserNeedLeave;
@property (nonatomic) NSString waitingUserToast;
+ (id)descriptor;
@end
