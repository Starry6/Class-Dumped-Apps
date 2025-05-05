@interface ProductsData_ExplainCard : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString cardJumpURL;
@property (nonatomic) NSInteger lastDuration;
@property (nonatomic) HTSLiveProduct product;
@property (nonatomic) BOOL hasProduct;
+ (id)descriptor;
@end
