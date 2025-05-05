@interface CNIndexClientState : NSObject
@property (nonatomic) q indexVersion;
@property (nonatomic) BOOL isFullSyncDone;
@property (nonatomic) CNChangeHistoryAnchor fullSyncSnapshotAnchor;
@property (nonatomic) q fullSyncOffset;
- (id)init;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)indexVersion;
- (void)setIndexVersion:;
- (BOOL)isFullSyncDone;
- (void)setIsFullSyncDone:;
- (id)fullSyncSnapshotAnchor;
- (void)setFullSyncSnapshotAnchor:;
- (long long)fullSyncOffset;
- (void)setFullSyncOffset:;
+ (BOOL)supportsSecureCoding;
+ (id)clientStateWithData:logger:;
@end
