@interface HTSLiveCommentsSyncData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray commentsArray;
@property (nonatomic) Q commentsArray_Count;
@property (nonatomic) q nextTimestamp;
@property (nonatomic) NSInteger totalCommentNumber;
+ (id)descriptor;
@end
