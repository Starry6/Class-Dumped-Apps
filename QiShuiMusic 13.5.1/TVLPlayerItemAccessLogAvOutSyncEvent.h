@interface TVLPlayerItemAccessLogAvOutSyncEvent : TVLPlayerItemLogEvent
@property (nonatomic) NSInteger avOutSyncStartPts;
@property (nonatomic) NSInteger avOutSyncEndPts;
@property (nonatomic) NSString avOutSyncPtsInfo;
- (int)avOutSyncEndPts;
- (id)avOutSyncPtsInfo;
- (int)avOutSyncStartPts;
- (void)setAvOutSyncEndPts:;
- (void)setAvOutSyncPtsInfo:;
- (void)setAvOutSyncStartPts:;
- (id)init;
- (void).cxx_destruct;
@end
