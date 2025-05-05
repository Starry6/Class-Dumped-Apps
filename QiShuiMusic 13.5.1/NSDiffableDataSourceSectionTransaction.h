@interface NSDiffableDataSourceSectionTransaction : NSObject
@property (nonatomic) @ sectionIdentifier;
@property (nonatomic) NSDiffableDataSourceSectionSnapshot initialSnapshot;
@property (nonatomic) NSDiffableDataSourceSectionSnapshot finalSnapshot;
@property (nonatomic) NSOrderedCollectionDifference difference;
- (id)initialSnapshot;
- (id)sectionIdentifier;
- (id)difference;
- (id)finalSnapshot;
- (void).cxx_destruct;
- (id)description;
- (id)_spiCopy;
- (BOOL)isEqual:;
- (id)initWithSectionIdentifier:initialSnapshot:finalSnapshot:difference:;
@end
