@interface AVPlayerItemOutput : NSObject
@property (nonatomic) BOOL suppressesPlayerRendering;
- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (BOOL)_attachToPlayerItem:;
- (void)_detachFromPlayerItem;
- (id)_itemTimeForHostTimeAsCMTime:;
- (id)itemTimeForHostTime:;
- (id)itemTimeForMachAbsoluteTime:;
- (void)setSuppressesPlayerRendering:;
- (BOOL)suppressesPlayerRendering;
- (id)_copyTimebase;
- (void)_setTimebase:;
@end
