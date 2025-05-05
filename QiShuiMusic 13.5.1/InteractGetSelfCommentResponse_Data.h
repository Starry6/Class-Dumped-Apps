@interface InteractGetSelfCommentResponse_Data : IESLivePBBaseMessage
@property (nonatomic) BOOL success;
@property (nonatomic) NSMutableArray commentArray;
@property (nonatomic) Q commentArray_Count;
+ (id)descriptor;
@end
