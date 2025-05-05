@interface FPTrashUnionCollection : FPUnionCollection
@property (nonatomic) FPQueryCollection trashQueryCollection;
- (void)setAllowedFileTypes:;
- (void)setExcludedFileTypes:;
- (void).cxx_destruct;
- (void)setDesiredNumberOfItems:;
- (id)scopedSearchQuery;
- (id)initWithQueryCollection:;
- (id)trashQueryCollection;
- (id)filterDomains:;
- (void)fetchTrashItemsFromProvider:completionHandler:;
- (void)updateCollectionsForDomains:;
@end
