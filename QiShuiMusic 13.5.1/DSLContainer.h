@interface DSLContainer : IESLivePBBaseMessage
@property (nonatomic) DSLDetail dslDetail;
@property (nonatomic) BOOL hasDslDetail;
+ (id)descriptor;
@end
