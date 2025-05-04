@interface AWEHPBubbleLabelLinkContentView : UIView
@property (nonatomic) AWEHPBubbleLabelLinkContentConfig config;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel linkLabel;
@property (nonatomic) UIView line;
@property (nonatomic) UIView clickView;
- (void)awe_themeDidChange:;
- (void)setupWithConfig:;
- (void)setClickView:;
- (id)clickView;
- (void)setLinkLabel:;
- (void)handleLinkTap;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id)line;
- (void).cxx_destruct;
- (void)setLine:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateUI;
- (id)linkLabel;
@end
