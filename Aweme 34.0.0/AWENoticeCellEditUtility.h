@interface AWENoticeCellEditUtility : NSObject
+ (void)deleteNoticeWith:viewController:dataSource:indexPath:;
+ (id)cellRowActionsWithTableView:indexPath:dataSource:originDataSource:classType:deletionCompletion:;
+ (id)cellRowActionsWithTableView:indexPath:dataSource:originDataSource:classType:deletionCompletion:removeFansCompletion:;
+ (id)cellRowActionsWithTableView:indexPath:currentDataSource:allDatacontrollers:classType:deletionCompletion:;
+ (void)deleteCommentInNoticeWith:viewController:dataSource:indexPath:;
+ (void)deleteOwnPostedDanmakuNoticeWith:viewController:dataSource:indexPath:;
+ (id)cellRowActionWithTitle:actionType:completion:;
+ (void)__modularizedDisableNoticeWithModel:tableView:originDataSource:allDatacontrollers:;
+ (void)__disableNoticeWithModel:actionType:tableView:originDataSource:allDatacontrollers:;
+ (id)__accountTypeForTrackerWithModel:;
+ (void)__modularizedDisableDispatchWithModel:disableButton:tableView:originDataSource:allDatacontrollers:;
+ (void)__showNewReCheckViewWithNoticeModel:completion:;
+ (void)__disableDispatchWithModel:actionType:tableView:originDataSource:allDatacontrollers:;
+ (void)__uploadVisitorOrHistoryNoticeSettingsWithType:toValue:tableView:dataSource:allDatacontrollers:;
+ (void)__removeNoticeInTableView:viewController:dataSource:indexPath:;
@end
