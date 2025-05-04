@interface AWEShowMixPlayerView : UIView
@property (nonatomic) q viewType;
@property (nonatomic) <AWEShowPlayerControllerProtocol> playerController;
@property (nonatomic) <AWEShowMixPlayerViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithAwemeModel:;
- (void)setupSubView;
- (void)updateWithEpisode:;
- (void)updateWithLiveModel:;
- (BOOL)reusePlayerController:model:;
- (void)resetPlayerControllerIfNeed;
- (id)delegate;
- (void)setPlayerController:;
- (id)playerController;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)viewType;
- (void)setViewType:;
- (void)updateWithModel:;
@end
