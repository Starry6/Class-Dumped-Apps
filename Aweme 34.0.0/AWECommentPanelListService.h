@interface AWECommentPanelListService : NSObject
- (id)serviceViewModel:;
- (id)richContentService;
- (id)generateMediaFeedSectionViewModelArray:context:;
- (id)makeCommentViewController;
- (id)makeManagerPageWithAwemeModel:pageContext:;
- (id)makeCommentSummaryPage:opinionID:opinionText:pageContext:;
- (id)commentListSectionControllerClassArray;
- (id)cellService;
- (id)sectionViewModelService;
- (id)commentListGuideElement;
- (id)commentReplyListViewControllerManagerWithParams:;
- (id)businessCommentListServiceContainer:contextDelegate:serviceID:colorMode:businessExtraParams:;
- (BOOL)showCommentDeleteAlertIfNeed:comment:extra:;
- (id)postCommentTracker;
- (id)inputViewMakeContextForMediaFeed:referString:interactionViewController:videoStateChangeDelegate:;
- (id)init;
@end
