@interface FPSearchQueryDataSource : NSObject
@property (nonatomic) FPSearchQueryDescriptor queryDescriptor;
@property (nonatomic) <FPSpotlightDataSourceDelegate> delegate;
@property (nonatomic) BOOL hasMoreIncoming;
@property (nonatomic) Q lastForcedUpdate;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (id)queryDescriptor;
- (void)dataSource:replaceContentsWithItems:hasMoreChanges:;
- (void)dataSource:receivedUpdatedItems:deletedItems:hasMoreChanges:;
- (void)dataSource:wasInvalidatedWithError:;
- (BOOL)dataSourceShouldAlwaysReplaceContents:;
- (unsigned long long)lastForcedUpdate;
- (void)dataSource:didChangeItemsOrigin:;
- (void)enumerationMightHaveResumed;
- (BOOL)hasMoreIncoming;
- (id)initWithQueryDescriptor:predicate:;
@end
