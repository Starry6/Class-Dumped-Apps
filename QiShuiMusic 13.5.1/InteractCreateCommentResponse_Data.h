@interface InteractCreateCommentResponse_Data : IESLivePBBaseMessage
@property (nonatomic) BOOL success;
@property (nonatomic) NSString commentId;
+ (id)descriptor;
@end
