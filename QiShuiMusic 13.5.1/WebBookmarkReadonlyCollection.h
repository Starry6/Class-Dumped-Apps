@interface WebBookmarkReadonlyCollection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_collection;
- (void).cxx_destruct;
- (id)bookmarkWithID:;
- (id)bookmarksMatchingString:;
- (void)enumerateBookmarks:andReadingListItems:matchingString:usingBlock:;
- (id)databaseHealthInformation;
- (id)readingListWithUnreadOnly:filteredUsingString:;
- (id)readingListBookmarksMatchingString:maxResults:onlyArchivedBookmarks:;
- (id)initReadonlySafariBookmarkCollection;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:;
- (id)leafChildCountForFoldersInFolderWithID:;
@end
