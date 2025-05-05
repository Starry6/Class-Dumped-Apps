@interface IAVDConfiguration : NSObject
@property (nonatomic) IAVDSnapshotViewConfiguration snapshotViewConfiguration;
@property (nonatomic) IAVDHierarchyViewConfiguration hierarchyViewConfiguration;
- (id)hierarchyViewConfiguration;
- (void)setHierarchyViewConfiguration:;
- (void)setSnapshotViewConfiguration:;
- (id)snapshotViewConfiguration;
- (id)init;
- (void).cxx_destruct;
@end
