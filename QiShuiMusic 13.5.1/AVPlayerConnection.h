@interface AVPlayerConnection : NSObject
@property (nonatomic) q status;
- (void)dealloc;
- (void)removeItemFromPlayQueue;
- (id)error;
- (id)initWithWeakReferenceToPlayer:weakReferenceToPlayerItem:;
- (id)player;
- (id)playerItem;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:;
- (id)description;
- (long long)status;
@end
