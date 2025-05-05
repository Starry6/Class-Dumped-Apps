@interface IESECLiveAnchorFlashSaleCreateViewTitleCell : IESECLiveAnchorFlashSaleCreateViewCell
@property (nonatomic) UIView titleView;
@property (nonatomic) UILabel titleViewContentAuto;
@property (nonatomic) UIView titleSeparator;
@property (nonatomic) UILabel titleViewContentEdit;
@property (nonatomic) UIImageView pencilIconView;
- (id)pencilIconView;
- (void)setItem:showWarn:;
- (void)setPencilIconView:;
- (void)setTitleSeparator:;
- (void)setTitleViewContentAuto:;
- (void)setTitleViewContentEdit:;
- (id)titleSeparator;
- (id)titleViewContentAuto;
- (id)titleViewContentEdit;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleView:;
- (void).cxx_destruct;
- (id)titleView;
@end
