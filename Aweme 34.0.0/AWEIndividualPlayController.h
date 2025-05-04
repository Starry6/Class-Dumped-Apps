@interface AWEIndividualPlayController : NSObject
@property (nonatomic) <AWEPlayVideoViewControllerProtocol> playerVC;
@property (nonatomic) <AWEIndividualPlayControllerVideoDelegate> videoDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:playbackFailedWithError:;
- (void)player:didChangePlaybackToAction:;
- (void)prepareWithModel:completionBlock:;
- (id)playerVC;
- (void)setPlayerVC:;
- (BOOL)play;
- (void).cxx_destruct;
- (void)pause;
- (void)setVideoDelegate:;
- (id)videoDelegate;
@end
