@interface HTSLiveLinkmicProfitBidPaidLinkmicDealContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveBidPaidLinkmicDealInfo dealInfo;
@property (nonatomic) BOOL hasDealInfo;
@property (nonatomic) NSMutableArray positionsArray;
@property (nonatomic) Q positionsArray_Count;
+ (id)descriptor;
@end
