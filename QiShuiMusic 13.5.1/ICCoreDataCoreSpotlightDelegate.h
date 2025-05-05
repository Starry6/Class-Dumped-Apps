@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate
@property (nonatomic) BOOL isCheckingObjectConsistency;
@property (nonatomic) BOOL shouldPerformConsistencyCheck;
@property (nonatomic) Q indexingPriority;
- (unsigned long long)indexingPriority;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)indexName;
- (id)attributeSetForObject:;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (id)initForStoreWithDescription:coordinator:indexingPriority:;
- (BOOL)shouldIndexableObjectExistInIndexing:;
- (void)setIndexingPriority:;
- (BOOL)isCheckingObjectConsistency;
- (void)setIsCheckingObjectConsistency:;
- (BOOL)shouldPerformConsistencyCheck;
@end
