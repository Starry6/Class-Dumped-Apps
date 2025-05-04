@interface AWESearchPOIMultipleFunctionCityEditBar : UIView
@property (nonatomic) AWESearchPOIBarConfigModel model;
@property (nonatomic) UIView rightButtonBorderView;
@property (nonatomic) @? rightButtonDidTapBlock;
- (void)setRightButtonDidTapBlock:;
- (void)setRightButtonBorderView:;
- (void)rightButtonDidTap:;
- (id)rightButtonDidTapBlock;
- (id)rightButtonBorderView;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
@end
