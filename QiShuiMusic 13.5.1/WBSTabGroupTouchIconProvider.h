@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)tabGroupManager:didUpdateTabsInTabGroup:;
- (id)backgroundColor;
- (id)bookmarkUUIDForRequest:;
- (void)updateIconForTabGroupIfNeeded:;
- (id)displayableFolderContentsForRequest:;
- (void)tabGroupManager:didRemoveTabGroup:;
- (id)iconForTabGroup:;
- (id)defaultFolderIconForRequest:;
- (BOOL)canHandleRequest:;
- (void)_cancelRequestsAndClearCacheForTabGroup:;
- (id)configuration;
- (id)touchIconRequestForBookmark:inFolderWithRequest:;
- (void).cxx_destruct;
- (void)_cancelRequestsAndClearCacheForTabGroup:metadata:;
@end
