@interface HTSLiveUnaryNode : IESLivePBBaseMessage
@property (nonatomic) NSString operator_p;
@property (nonatomic) HTSLiveASTNode node;
@property (nonatomic) BOOL hasNode;
+ (id)descriptor;
@end
