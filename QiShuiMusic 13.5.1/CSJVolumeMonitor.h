@interface CSJVolumeMonitor : NSObject
@property (nonatomic) q observerCount;
@property (nonatomic) @? volumeChangeBlock;
- (void)endVolumeMonitor;
- (void)setObserverCount:;
- (void)setVolumeChangeBlock:;
- (void)startVolumeMonitor;
- (void)volumeChangeNotification:;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)volumeChangeBlock;
- (long long)observerCount;
+ (id)getSystemVolumeSlider;
+ (id)defaultMonitor;
@end
