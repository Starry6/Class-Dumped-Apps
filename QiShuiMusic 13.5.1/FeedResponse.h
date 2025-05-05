@interface FeedResponse : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
@property (nonatomic) FeedExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
