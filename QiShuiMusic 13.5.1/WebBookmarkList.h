@interface WebBookmarkList : NSObject
@property (nonatomic) I bookmarkCount;
@property (nonatomic) NSInteger folderID;
@property (nonatomic) WebBookmarkList shadowBookmarkList;
- (void)setShadowBookmarkList:;
- (unsigned int)bookmarkCount;
- (id)initWithQuery:skipOffset:collection:;
- (id)initWithQuery:skipOffset:collection:queue:;
- (id)_arrayForDifferenceCalculation;
- (id)shadowBookmarkList;
- (id)objectAtIndexedSubscript:;
- (void)_moveBookmarkAtIndex:toIndex:;
- (int)folderID;
- (id)differenceFromList:withOptions:;
- (unsigned int)_reverseOrderIndex:;
- (id)bookmarkAtIndex:;
- (id)bookmarkArrayRequestingCount:;
- (void)_loadBookmarksForDifferenceFromList:;
- (void).cxx_destruct;
- (unsigned int)_primaryBookmarkCount;
- (id)_bookmarkAtIndex:paginate:;
- (id)bookmarkArray;
@end
