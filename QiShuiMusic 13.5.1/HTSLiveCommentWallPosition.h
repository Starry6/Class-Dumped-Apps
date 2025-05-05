@interface HTSLiveCommentWallPosition : IESLivePBBaseMessage
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) q eventTime;
+ (id)descriptor;
@end
