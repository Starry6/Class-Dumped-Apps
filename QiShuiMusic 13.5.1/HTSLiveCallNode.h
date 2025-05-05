@interface HTSLiveCallNode : IESLivePBBaseMessage
@property (nonatomic) HTSLiveIdentifierNode caller;
@property (nonatomic) BOOL hasCaller;
@property (nonatomic) NSMutableArray argumentsArray;
@property (nonatomic) Q argumentsArray_Count;
+ (id)descriptor;
@end
