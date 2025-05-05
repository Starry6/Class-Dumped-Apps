@interface BDXTabBarCategoryView : BDXCategoryIndicatorView
@property (nonatomic) {?={_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}{_LynxBorderUnitValue=dq}} borderRadii;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastRect;
@property (nonatomic) BDXLynxTabBarPro lynxTabbar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)selectCellAtIndex:selectedType:;
- (id)lynxTabbar;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:;
- (void)refreshCellModel:index:;
- (void)refreshDataSource;
- (void)setLynxTabbar:;
- (void)widthDidChanged:;
- (void)layoutSubviews;
- (void)insertSubview:atIndex:;
- (void).cxx_destruct;
- (id)borderRadii;
- (id)lastRect;
- (void)setLastRect:;
- (void)setBorderRadii:;
@end
