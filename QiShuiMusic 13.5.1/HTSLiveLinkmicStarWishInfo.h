@interface HTSLiveLinkmicStarWishInfo : IESLivePBBaseMessage
@property (nonatomic) q playId;
@property (nonatomic) NSMutableArray playerInfoArray;
@property (nonatomic) Q playerInfoArray_Count;
+ (id)descriptor;
@end
