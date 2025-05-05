@interface HTSLiveBidPaidLinkmicContent : IESLivePBBaseMessage
@property (nonatomic) q startPrice;
@property (nonatomic) q linkDuration;
@property (nonatomic) q maxBidPrice;
@property (nonatomic) q bidDuration;
@property (nonatomic) NSMutableArray bidStepsArray;
@property (nonatomic) Q bidStepsArray_Count;
+ (id)descriptor;
@end
