@interface AWESpecialCardScrollTipView : UIView
@property (nonatomic) UILabel scrollTipLabel;
@property (nonatomic) UIImageView moreImageView;
@property (nonatomic) AWESpecialCardScrollTipViewConfig config;
- (void)setMoreImageView:;
- (id)moreImageView;
- (id)scrollTipLabel;
- (void)setScrollTipLabel:;
- (void)setConfig:;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateColor;
@end
