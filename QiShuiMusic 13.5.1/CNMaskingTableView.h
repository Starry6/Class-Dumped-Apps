@interface CNMaskingTableView : UITableView
@property (nonatomic) UIView tableMaskView;
@property (nonatomic) double maskingInset;
- (void)tlk_updateForAppearance:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setMaskingInset:;
- (id)tableMaskView;
- (double)maskingInset;
- (void)setTableMaskView:;
@end
