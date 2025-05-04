@interface AWEIMMessageBubbleThemeView : UIView
@property (nonatomic) UIImageView leftTopView;
@property (nonatomic) UIImageView rightTopView;
@property (nonatomic) UIImageView leftBottomView;
@property (nonatomic) UIImageView rightBottomView;
- (void)p_setupUI;
- (id)leftBottomView;
- (void)setLeftBottomView:;
- (id)rightTopView;
- (void)setRightTopView:;
- (void)configWithModel:height:;
- (id)leftTopView;
- (id)rightBottomView;
- (void)setLeftTopView:;
- (void)setRightBottomView:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
