@interface WBSExtensionCyclerCommandHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchTopLevelBookmarkList:;
- (void)clearBookmarksWithOptions:completionHandler:;
- (void)createBookmarkWithTitle:url:inListWithIdentifier:atIndex:reply:;
- (void)createBookmarkListWithTitle:inListWithIdentifier:atIndex:reply:;
- (void)deleteBookmarkWithIdentifier:reply:;
- (void)moveBookmarkWithIdentifier:intoListWithIdentifier:atIndex:reply:;
- (void)setTitle:forBookmarkWithIdentifier:reply:;
- (void)setURL:forBookmarkWithIdentifier:reply:;
- (void)syncBookmarksWithCompletionHandler:;
@end
