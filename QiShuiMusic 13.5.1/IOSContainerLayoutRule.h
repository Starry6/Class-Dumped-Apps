@interface IOSContainerLayoutRule : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray itemsArray;
@property (nonatomic) Q itemsArray_Count;
@property (nonatomic) BOOL ruleReplace;
@property (nonatomic) NSString target;
@property (nonatomic) NSString ruleType;
+ (id)descriptor;
@end
