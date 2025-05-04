@interface AWEProfileBubbleCacheCleanAlter : AWEUINotificationBarView
@property (nonatomic) q cleanSize;
@property (nonatomic) q trackFreeSize;
- (void)themeChange;
- (void)updateActionImage;
- (void)trackPopupAction:;
- (void)setTrackFreeSize:;
- (long long)trackFreeSize;
- (long long)cleanSize;
- (void)setCleanSize:;
- (void)dealloc;
- (void)config;
- (void)didShow;
- (void)didPop;
@end
