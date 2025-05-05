@interface LynxFPSMonitor : NSObject
@property (nonatomic) BOOL supportsDynamicFrameRate;
@property (nonatomic) BOOL active;
- (id)beginWithKey:;
- (void)displayLinkDidUpdate:;
- (id)endWithKey:;
- (void)onAppNotification:;
- (id)pauseWithKey:;
- (id)recordWithKey:;
- (void)setActive:forRecord:;
- (void)setState:forRecord:;
- (id)setState:forRecordWithKey:;
- (void)setSupportsDynamicFrameRate:;
- (void)setupDisplayLinkPaused:;
- (BOOL)supportsDynamicFrameRate;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isActive;
- (void)setupNotifications;
@end
