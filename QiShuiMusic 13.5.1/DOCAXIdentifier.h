@interface DOCAXIdentifier : NSObject
+ (id)idBase;
+ (Class)itemInfoView;
+ (Class)sidebar;
+ (Class)viewStyleSelector;
+ (Class)navBarButton;
+ (id)fullNavBar;
+ (id)browsingModeTabBar;
+ (id)browsingRoot;
+ (id)browsingRootIdentifierForSourceIdentifier:;
+ (id)itemCollectionView;
+ (id)searchMenuButtonShowing:;
+ (id)itemCollectionMenuButtonShowing:;
+ (id)sortByHeaderButtonForSortIdentifier:ascending:active:;
+ (id)sortByMenuButtonForSortIdentifier:ascending:active:;
+ (id)groupByMenuButtonForGrouping:;
+ (id)inlineRenameField;
+ (id)itemInfoNavigationRoot;
+ (id)tagEditorContainer;
@end
