@interface PLSpotlightDeletionOperation : PLSpotlightAsyncOperation
@property (nonatomic) CSSearchableIndex searchableIndex;
@property (nonatomic) NSArray searchableItemIdentifiers;
@property (nonatomic) PLPhotoLibrary photoLibrary;
- (id)photoLibrary;
- (void)main;
- (void).cxx_destruct;
- (id)searchableIndex;
- (id)searchableItemIdentifiers;
- (id)initWithPhotoLibrary:spotlightSearchableIndex:searchableItemIdentifiers:;
@end
