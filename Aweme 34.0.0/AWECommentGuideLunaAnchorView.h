@interface AWECommentGuideLunaAnchorView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel preTitleLabel;
@property (nonatomic) UIButton songButton;
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? displayBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (void)setClickBlock:;
- (id)clickBlock;
- (double)commentAnchorHeight;
- (id)preTitleLabel;
- (void)setPreTitleLabel:;
- (id)songButton;
- (void)p_didClickSong;
- (void)setSongButton:;
- (void)setDisplayBlock:;
- (id)displayBlock;
- (void)updateWithAnchorTitle:songTitle:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setUpUI;
@end
