@interface PLThumbnailContextCleanupTimer : NSObject
- (id)initWithHandler:;
- (void)_timerFired;
- (void)startOrRestartTimer;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
@end
