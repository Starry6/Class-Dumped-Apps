@interface AWEHotSearchCommentTitleView : UIView
@property (nonatomic) AWEHotSearchCommentTitleFlameView flameView;
@property (nonatomic) YYLabel titleLabel;
- (void)makeConstraint;
- (void)updateDarkTheme;
- (void)updateGrayTheme;
- (id)flameView;
- (void)setFlameView:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)updateWithContext:;
@end
