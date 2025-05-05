@interface SFFolderPickerList : NSObject
@property (nonatomic) <TabGroupProvider> tabGroupProvider;
- (id)tabGroupProvider;
- (void).cxx_destruct;
- (void)setTabGroupProvider:;
- (id)initWithBookmarkCollection:style:;
- (id)folderListItemsIgnoringIdentifiers:;
- (void)_appendChildrenOfFolder:toArray:depth:ignoringIdentifiers:;
- (void)_appendFolderAndChildren:toArray:depth:ignoringIdentifiers:;
- (void)_appendPerTabGroupFavoritesIntoArray:;
@end
