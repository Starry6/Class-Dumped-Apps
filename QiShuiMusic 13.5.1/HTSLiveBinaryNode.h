@interface HTSLiveBinaryNode : IESLivePBBaseMessage
@property (nonatomic) NSString operator_p;
@property (nonatomic) HTSLiveASTNode left;
@property (nonatomic) BOOL hasLeft;
@property (nonatomic) HTSLiveASTNode right;
@property (nonatomic) BOOL hasRight;
+ (id)descriptor;
@end
