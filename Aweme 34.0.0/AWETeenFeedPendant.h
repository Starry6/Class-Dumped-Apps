@interface AWETeenFeedPendant : UIView
@property (nonatomic) UIImageView contentImageView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)p_closeButtonClicked;
- (void)p_setupViews;
- (void)p_setupGestures;
- (void)p_pendantClicked;
- (id)initWithFrame:pendantImage:;
- (void).cxx_destruct;
- (void)setCloseButton:;
- (id)closeButton;
- (id)contentImageView;
- (void)setContentImageView:;
@end
