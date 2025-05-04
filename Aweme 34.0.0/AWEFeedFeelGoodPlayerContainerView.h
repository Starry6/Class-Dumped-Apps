@interface AWEFeedFeelGoodPlayerContainerView : UIView
@property (nonatomic) UIControl coverView;
@property (nonatomic) UIView playerView;
@property (nonatomic) UIView playerBGView;
@property (nonatomic) @? tapBlock;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} dstFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} srcFrame;
@property (nonatomic) double videoUpOffset;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)srcFrame;
- (void)setSrcFrame:;
- (void)setDstFrame:;
- (void)setVideoUpOffset:;
- (void)insertPlayerView:;
- (id)playerBGView;
- (double)videoUpOffset;
- (void)setPlayerBGView:;
- (void)onTouchEvent;
- (id)dstFrame;
- (id)initWithFrame:;
- (void)setFrame:;
- (void)setPlayerView:;
- (id)playerView;
- (void).cxx_destruct;
- (id)coverView;
- (void)setCoverView:;
@end
