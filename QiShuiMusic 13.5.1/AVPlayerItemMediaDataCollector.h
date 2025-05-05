@interface AVPlayerItemMediaDataCollector : NSObject
- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (void)_detatchFromPlayerItem;
- (BOOL)_attachToPlayerItem:;
@end
