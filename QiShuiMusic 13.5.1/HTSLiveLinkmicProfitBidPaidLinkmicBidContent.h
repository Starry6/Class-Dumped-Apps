@interface HTSLiveLinkmicProfitBidPaidLinkmicBidContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveBidPaidLinkmicBidInfo bidInfo;
@property (nonatomic) BOOL hasBidInfo;
@property (nonatomic) NSMutableArray bidRecordsArray;
@property (nonatomic) Q bidRecordsArray_Count;
@property (nonatomic) BOOL hasMore;
+ (id)descriptor;
@end
