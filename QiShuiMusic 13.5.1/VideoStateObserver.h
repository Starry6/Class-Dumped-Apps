@interface VideoStateObserver : NSObject
- (void)autoNotifyStatusCanRender;
- (void)checkTimeObserver;
- (id)initWithItem:context:player:output:jsQueue:playing:;
- (void)realNotifyStatusCanRender;
- (void)tryToRemoveTimeObserver;
- (void)unobserve;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)observe;
@end
