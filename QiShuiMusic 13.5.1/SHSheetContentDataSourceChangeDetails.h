@interface SHSheetContentDataSourceChangeDetails : NSObject
@property (nonatomic) BOOL snapshotChanged;
@property (nonatomic) BOOL forceReload;
@property (nonatomic) BOOL animateDifferences;
@property (nonatomic) BOOL airDropBadgeChanged;
@property (nonatomic) BOOL sectionsChanged;
@property (nonatomic) BOOL peopleCountChanged;
@property (nonatomic) NSArray modifiedIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (BOOL)forceReload;
- (void)setForceReload:;
- (BOOL)snapshotChanged;
- (void)setSnapshotChanged:;
- (BOOL)animateDifferences;
- (void)setAnimateDifferences:;
- (BOOL)airDropBadgeChanged;
- (void)setAirDropBadgeChanged:;
- (BOOL)sectionsChanged;
- (void)setSectionsChanged:;
- (BOOL)peopleCountChanged;
- (void)setPeopleCountChanged:;
- (id)modifiedIdentifiers;
- (void)setModifiedIdentifiers:;
@end
