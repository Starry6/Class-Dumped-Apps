@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:inFolder:;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:inFolder:;
- (id)_bookmarksIDsFromBookmarks:fromChangeSet:withFilter:;
@end
