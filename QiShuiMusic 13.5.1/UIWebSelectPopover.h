@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover
@property (nonatomic) UIWebSelectTableViewController _tableViewController;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLSelectElement:cachedItems:singleSelectionItem:singleSelectionIndex:multipleSelection:;
- (void)_userActionDismissedPopover:;
- (id)_tableViewController;
- (void)set_tableViewController:;
@end
