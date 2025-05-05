@interface GiftUGCPoolResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray giftsArray;
@property (nonatomic) Q giftsArray_Count;
@property (nonatomic) NSMutableArray poolArray;
@property (nonatomic) Q poolArray_Count;
@property (nonatomic) GPBInt64Array topGiftIdsArray;
@property (nonatomic) Q topGiftIdsArray_Count;
@property (nonatomic) GPBInt64Array dislikeGiftIdsArray;
@property (nonatomic) Q dislikeGiftIdsArray_Count;
+ (id)descriptor;
@end
