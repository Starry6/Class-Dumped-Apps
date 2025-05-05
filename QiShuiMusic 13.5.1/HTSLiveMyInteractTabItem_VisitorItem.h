@interface HTSLiveMyInteractTabItem_VisitorItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser visitor;
@property (nonatomic) BOOL hasVisitor;
+ (id)descriptor;
@end
