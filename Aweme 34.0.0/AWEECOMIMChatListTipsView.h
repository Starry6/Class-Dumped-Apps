@interface AWEECOMIMChatListTipsView : UIView
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) @? viewClickBlock;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)updateViewWithTipsStr:;
- (double)currentWidthWithTipsStr:;
- (void)setViewClickBlock:;
- (void)viewTouchInside;
- (id)viewClickBlock;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
@end
