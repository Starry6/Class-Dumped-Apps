@interface AVMobilePlaybackRateMenuController : NSObject
@property (nonatomic) AVPlaybackSpeedCollection playbackSpeedCollection;
@property (nonatomic) UIMenu menu;
- (id)init;
- (void)dealloc;
- (void)_updatePlaybackRateMenuItemStatesIfNeeded;
- (void)_updatePlaybackRateMenuIfNeeded;
- (void)setPlaybackSpeedCollection:;
- (void)_reconstructPlaybackRateMenuItems;
- (id)menu;
- (void).cxx_destruct;
- (id)playbackSpeedCollection;
+ (void)_loadPlaybackSpeedControlImageWithCompletionHandler:;
@end
