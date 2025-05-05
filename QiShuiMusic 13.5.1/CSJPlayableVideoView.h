@interface CSJPlayableVideoView : UIView
@property (nonatomic) CSJPlayableVideoViewConfig config;
@property (nonatomic) BUPlayer player;
- (void)addGridentLayer;
- (id)initWithItem:frame:config:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setConfig:;
- (id)player;
- (void).cxx_destruct;
- (void)setPlayer:;
- (id)config;
- (void)setupViews;
- (void)setupLayout;
@end
