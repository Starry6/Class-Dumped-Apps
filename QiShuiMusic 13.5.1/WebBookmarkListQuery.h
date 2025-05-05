@interface WebBookmarkListQuery : NSObject
@property (nonatomic) BOOL customQuery;
@property (nonatomic) NSInteger folderID;
@property (nonatomic) <WebBookmarkInMemoryChangeFilter> inMemoryFilter;
- (id)init;
- (void)_preparePrefixesFromNormalizedString:;
- (int)_childCountInDatabaseForFolderFetchInCollection:skipCountingInDatabaseBookmarksThatAreDeletedInMemory:countShouldUseNumChildrenIfPossible:;
- (int)folderID;
- (id)debugDescription;
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:bookmarksInFolder:collection:;
- (long long)_listQueryType;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:collection:skipCountingBookmarksThatAreDeletedInMemory:;
- (id)_normalizeUserTypedString:;
- (int)_childCountInDatabaseForFolderFetchInCollection:skipCountingInDatabaseBookmarksThatAreDeletedInMemory:;
- (void).cxx_destruct;
- (int)countInCollection:;
- (BOOL)isCustomQuery;
- (id)initWithBookmarksWhere:orderBy:usingFilter:;
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:collection:;
- (id)initWithBookmarksWhere:folderID:orderBy:usingFilter:;
- (id)_filterBookmarks:;
- (id)inMemoryFilter;
- (id)bookmarksInCollection:fromIndex:toIndex:;
- (void)setInMemoryFilter:;
- (id)initWithFolderID:inCollection:usingFilter:options:;
@end
