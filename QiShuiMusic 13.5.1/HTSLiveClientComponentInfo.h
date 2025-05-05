@interface HTSLiveClientComponentInfo : IESLivePBBaseMessage
@property (nonatomic) NSString containerId;
@property (nonatomic) HTSLiveClientComponentFunctionInfo functionDetail;
@property (nonatomic) BOOL hasFunctionDetail;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) DSLDetail dslDetail;
@property (nonatomic) BOOL hasDslDetail;
@property (nonatomic) NSString dslLayout;
+ (id)descriptor;
@end
