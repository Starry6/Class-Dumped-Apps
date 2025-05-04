@interface AWEAdVibrationManagerProtocol : HTSService
@property (nonatomic) @? playerCurrentPlaybackTime;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (void)onPlayerWillLoopPlaying:;
- (void)onPlayer:didChangeStallState:actionType:reason:;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)preloadVibrationResourceFor:;
- (void)removeCacheFor:;
- (void)closeAdOperationGuide;
- (void)onServiceInit;
- (void)clearAllCache;
- (id)initWithAweme:;
- (id)commerceContext;
- (void)setCommerceContext:;
- (id)playerCurrentPlaybackTime;
- (void)setPlayerCurrentPlaybackTime:;
- (void)clearLocalJsonData;
- (id)init;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)canShowComponentWithContext:;
@end
