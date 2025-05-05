@interface InteractCreateCommentData : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) InteractCreateCommentData_CreateCommentArgs params;
@property (nonatomic) BOOL hasParams;
+ (id)descriptor;
@end
