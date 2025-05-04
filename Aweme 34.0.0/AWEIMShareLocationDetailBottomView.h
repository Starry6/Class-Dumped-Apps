@interface AWEIMShareLocationDetailBottomView : UIView
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIButton naviButton;
@property (nonatomic) @? naviAction;
- (void)p_setupUI;
- (id)naviButton;
- (void)naviButtonAction;
- (id)naviAction;
- (void)setNaviAction:;
- (void)setNaviButton:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (void)setNameLabel:;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
