@interface WBInMemoryChangeFilterVisible : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:inFolder:;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:inFolder:;
- (BOOL)shouldIncludeBookmarkAddedInMemory:;
- (BOOL)isBookmarkVisible:;
@end
