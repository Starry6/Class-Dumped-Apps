@interface AWEECommerceFeedCommentViewController : UIViewController
@property (nonatomic) IESECFeedCommentViewController feedCommentViewController;
@property (nonatomic) NSString replyLabelText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWECommentGesProtocol> gesDelegate;
@property (nonatomic) <AWECommentListServiceContainerProtocol> commentServiceContainerDelegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fromCommentVC;
@property (nonatomic) UITableView tableView;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL shouldForceLightMode;
@property (nonatomic) BOOL isShowInContainerView;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString accountType;
- (id)referString;
- (void)setCommentServiceContainerDelegate:;
- (void)setReferString:;
- (id)commentServiceContainerDelegate;
- (long long)businessServiceDataSourceCount;
- (id)identifierForBusinessServiceDataSourceInSection:;
- (id)replyCountForSection:;
- (void)updateReplyCountForSection:count:;
- (void)setShouldForceLightMode:;
- (void)setIsBGColorWhite:;
- (void)setIsShowInContainerView:;
- (void)setGesDelegate:;
- (BOOL)isBGColorWhite;
- (id)gesDelegate;
- (BOOL)fromCommentVC;
- (void)setFromCommentVC:;
- (BOOL)shouldForceLightMode;
- (BOOL)isShowInContainerView;
- (void)onAWEUIThemeChangeNotification;
- (id)feedCommentViewController;
- (void)setFeedCommentViewController:;
- (id)replyLabelText;
- (BOOL)container_shouldTriggleTableView:numberOfRowsInSection:;
- (long long)container_tableView:numberOfRowsInSection:;
- (BOOL)container_shouldTriggleTableView:cellForRowAtIndexPath:;
- (id)container_tableView:cellForRowAtIndexPath:;
- (void)container_tableView:cellOfContainer:atIndexPath:;
- (id)container_tableViewReplyLabelText;
- (BOOL)container_shouldTriggleTableView:heightForRowAtIndexPath:;
- (double)container_tableView:heightForRowAtIndexPath:;
- (BOOL)container_shouldTriggleTableView:heightForHeaderInSection:;
- (double)container_tableView:heightForHeaderInSection:;
- (BOOL)container_shouldTriggleTableView:heightForFooterInSection:;
- (double)container_tableView:heightForFooterInSection:;
- (BOOL)container_shouldTriggleTableView:viewForHeaderInSection:;
- (id)container_tableView:viewForHeaderInSection:;
- (BOOL)container_shouldTriggleTableView:viewForFooterInSection:;
- (id)container_tableView:viewForFooterInSection:;
- (void)container_tableView:willDisplayCell:forRowAtIndexPath:;
- (void)container_tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)container_tableView:willDisplayHeaderView:forSection:;
- (void)container_tableView:didEndDisplayingHeaderView:forSection:;
- (void)container_tableView:willDisplayFooterView:forSection:;
- (void)container_tableView:didEndDisplayingFooterView:forSection:;
- (void)container_tableView:didSelectRowAtIndexPath:;
- (void)setReplyLabelText:;
- (BOOL)isShowing;
- (void)setTableView:;
- (void)setAccountType:;
- (void)viewDidLoad;
- (id)accountType;
- (id)tableView;
- (id)initWithContext:;
- (long long)sectionForIdentifier:;
- (void).cxx_destruct;
- (id)currentList;
- (void)setIsShowing:;
@end
