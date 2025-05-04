@interface AWEFeedVolumeAdjustObserver : NSObject
- (void)muteAwemeCanceled;
- (void)handleBecomeActive:;
- (id)initWithEnterFrom:lowVolumeGuideHandler:;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (void)volumeDidChangeDebounceWithNewVolume:;
- (void)handleEnterBackground:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
