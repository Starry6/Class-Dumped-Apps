@interface ProductsData : IESLivePBBaseMessage
@property (nonatomic) ProductsData_ToolBar toolBar;
@property (nonatomic) BOOL hasToolBar;
@property (nonatomic) ProductsData_ExplainCard explainCard;
@property (nonatomic) BOOL hasExplainCard;
@property (nonatomic) ProductsData_ToolBar productListToolBar;
@property (nonatomic) BOOL hasProductListToolBar;
@property (nonatomic) NSInteger bringProductSwitchStatus;
@property (nonatomic) NSInteger paidLiveBringingProductFlag;
+ (id)descriptor;
@end
