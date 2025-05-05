@interface RxCollectionLayoutSolutionState : NSObject
@property (nonatomic) NSDictionary auxillaryRangeIndexerKindDict;
@property (nonatomic) NSArray bookmarks;
@property (nonatomic) RxRTree geometricIndexer;
@property (nonatomic) RxOrderedRangeIndexer itemRangeIndexer;
@property (nonatomic) RxCollectionLayoutSectionGeometryTranslator sectionGeometryTranslator;
- (id)auxillaryRangeIndexerKindDict;
- (id)copyWithGeometryConverter:;
- (id)geometricIndexer;
- (id)initWithGeometryTranslator:bookmarks:geometricIndexer:itemRangeIndexer:auxillaryRangeIndexerKindDict:;
- (id)itemRangeIndexer;
- (id)sectionGeometryTranslator;
- (void).cxx_destruct;
- (id)description;
- (id)bookmarks;
@end
