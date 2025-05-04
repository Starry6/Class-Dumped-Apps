@interface AWEGrouponFeedLiveExperimentProductView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIImageView liveContentInfoIcon;
@property (nonatomic) UILabel liveContentInfoTagLabel;
@property (nonatomic) UIView liveContentInfoSplitLine;
@property (nonatomic) UILabel liveContentInfoText;
- (id)liveContentInfoIcon;
- (id)liveContentInfoTagLabel;
- (id)liveContentInfoSplitLine;
- (id)liveContentInfoText;
- (void)setLiveContentInfoIcon:;
- (void)setLiveContentInfoTagLabel:;
- (void)setLiveContentInfoSplitLine:;
- (void)setLiveContentInfoText:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)updateInfo:;
- (void)setupUI;
+ (BOOL)canShowProductLabel:;
+ (id)firstTagString:;
+ (id)secondTagString:;
@end
