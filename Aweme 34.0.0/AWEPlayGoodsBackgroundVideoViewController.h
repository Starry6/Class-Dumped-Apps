@interface AWEPlayGoodsBackgroundVideoViewController : UIViewController
@property (nonatomic) <IESVideoPlayerProtocol> videoPlayer;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEAwemeGoodsInfo model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerDidReadyForDisplay:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)updateCoverImage;
- (void)configWithModel:;
- (void)setModel:;
- (id)videoPlayer;
- (void)setVideoPlayer:;
- (void)play;
- (void)resume;
- (void)viewDidLoad;
- (id)model;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)setupUI;
- (void)prepareToPlay;
@end
