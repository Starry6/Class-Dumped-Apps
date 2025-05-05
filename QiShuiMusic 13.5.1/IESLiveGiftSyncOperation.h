@interface IESLiveGiftSyncOperation : NSObject
@property (nonatomic) q newGiftSyncedCountLimit;
@property (nonatomic) q newGiftSyncedInterval;
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
@property (nonatomic) NSMutableDictionary requestedNewGiftsFrequencyMap;
- (BOOL)_enableRequestedNewTaskWithID:;
- (void)cleanCurrentRoomMaps;
- (BOOL)enableCurrentRoomRequestedNewGiftTaskWithID:;
- (BOOL)enableCurrentRoomRequestedNewGiftTaskWithIDs:;
- (long long)newGiftSyncedCountLimit;
- (long long)newGiftSyncedInterval;
- (id)requestedNewGiftsFrequencyMap;
- (void)setNewGiftSyncedCountLimit:;
- (void)setNewGiftSyncedInterval:;
- (void)setRequestedNewGiftsFrequencyMap:;
- (id)syncQueue;
- (id)init;
- (void)setSyncQueue:;
- (void).cxx_destruct;
@end
