@interface QLListViewController : UINavigationController
@property (nonatomic) <QLListViewControllerDelegate> archiveDelegate;
@property (nonatomic) UIBarButtonItem barButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tableView:cellForRowAtIndexPath:;
- (id)presentationController:viewControllerForAdaptivePresentationStyle:;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (double)tableView:estimatedHeightForRowAtIndexPath:;
- (void)prepareForPopoverPresentation:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)_dismiss;
- (long long)tableView:numberOfRowsInSection:;
- (id)barButton;
- (id)initWithPreviewItemStore:currentPreviewItem:;
- (void)_updateNavigationBarVisibilityForPresentationStyle:;
- (void)setBarButton:;
- (void)_generateItemsAndFolders;
- (void)_addPath:fromPreviewItem:intoArray:;
- (id)archiveDelegate;
- (void)setArchiveDelegate:;
@end
