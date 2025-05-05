@interface SelfDataConfig : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray singleLikeConfigArray;
@property (nonatomic) Q singleLikeConfigArray_Count;
@property (nonatomic) NSMutableArray singleTicketConfigArray;
@property (nonatomic) Q singleTicketConfigArray_Count;
@property (nonatomic) NSMutableArray composeLikeConfigArray;
@property (nonatomic) Q composeLikeConfigArray_Count;
@property (nonatomic) NSMutableArray giftConfigArray;
@property (nonatomic) Q giftConfigArray_Count;
@property (nonatomic) NSMutableArray giftUvConfigArray;
@property (nonatomic) Q giftUvConfigArray_Count;
@property (nonatomic) NSMutableArray voteConfigArray;
@property (nonatomic) Q voteConfigArray_Count;
@property (nonatomic) NSMutableArray specifyGiftDataArray;
@property (nonatomic) Q specifyGiftDataArray_Count;
@property (nonatomic) NSMutableArray subscribeConfigArray;
@property (nonatomic) Q subscribeConfigArray_Count;
+ (id)descriptor;
@end
