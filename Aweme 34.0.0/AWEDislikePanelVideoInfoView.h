@interface AWEDislikePanelVideoInfoView : UIView
@property (nonatomic) @? closeBlock;
@property (nonatomic) UIImageView videoThumb;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) DUXButton closeButton;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)didClickedClose;
- (id)videoThumb;
- (id)initWithClose:;
- (void)setVideoThumbImage:;
- (void)setVideoThumbImageWithArray:;
- (void)setThumbImageSize:;
- (void)setVideoThumb:;
- (void).cxx_destruct;
- (void)setTip:;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
