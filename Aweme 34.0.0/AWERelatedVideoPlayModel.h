@interface AWERelatedVideoPlayModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) <IESVideoPlayerProtocol> playerController;
@property (nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol><AWEAwemeBizPlayVideoProtocol><AWEPlayVideoViewControllerProtocol> insertPlayVideoViewController;
- (id)insertPlayVideoViewController;
- (void)setInsertPlayVideoViewController:;
- (id)itemID;
- (void)setItemID:;
- (BOOL)isPlaying;
- (void)setPlayerController:;
- (void)setCurrentPlaybackTime:;
- (id)playerController;
- (void).cxx_destruct;
- (double)currentPlaybackTime;
- (void)setIsPlaying:;
@end
