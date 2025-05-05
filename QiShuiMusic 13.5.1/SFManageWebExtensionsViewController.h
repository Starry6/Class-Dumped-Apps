@interface SFManageWebExtensionsViewController : UITableViewController
@property (nonatomic) _SFPageFormatMenuController presentingPageFormatMenu;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_reload;
- (void)dealloc;
- (id)tableView:cellForRowAtIndexPath:;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (void)viewDidDisappear:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)searchBar:textDidChange:;
- (void)searchBarSearchButtonClicked:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (void)_extensionStateWasToggled:;
- (void)extensionsControllerExtensionListDidChange:;
- (id)initFromPageFormatMenu:;
- (void)_updateLastViewedDate;
- (void)_setExtensionStateForExtension:isOn:;
- (void)_enableExtensionPromptingForNewTabOverrideIfNecessary:;
- (void)_enableExtensionWithNewTabOverridePage:;
- (id)presentingPageFormatMenu;
- (void)setPresentingPageFormatMenu:;
@end
