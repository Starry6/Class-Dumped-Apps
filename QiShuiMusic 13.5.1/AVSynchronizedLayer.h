@interface AVSynchronizedLayer : CALayer
@property (nonatomic) AVPlayerItem playerItem;
- (id)init;
- (void)dealloc;
- (BOOL)_isVisible;
- (void)layerDidBecomeVisible:;
- (id)playerItem;
- (id)_popAllOldPlayerItems;
- (void)_removeSelfFromPlayerItem:;
- (void)_updatePlayerItemState;
- (void)setPlayerItem:;
+ (id)synchronizedLayerWithPlayerItem:;
@end
