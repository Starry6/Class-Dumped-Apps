@interface AWETransferToNewCoverEditViewControllerManager : NSObject
+ (void)transferToNewCoverEditViewControllerWithPublishViewModel:transitioningDelegate:exitCallBack:customDismissBlock:extraInfo:;
+ (BOOL)enablePreupload;
+ (void)transferToNewCoverEditViewControllerWithPublishViewModel:transitioningDelegate:exitCallBack:extraInfo:;
+ (void)preloadImageTemplateUsedInfoWith:;
+ (void)proloadFixedTemplateResources;
+ (void)appendTrackInfoWithCoverModel:publishModel:extraInfo:;
+ (void)preloadDefaultImageTemplateInfoWithRequestParams:trackParams:;
+ (void)preloadImageTemplateListInsertModelInfoWith:;
+ (void)transferToNewCoverEditViewControllerWithPublishViewModel:transitioningDelegate:exitCallBack:;
+ (void)preloadRecommendImageTemplateInfoWith:requestParams:trackParams:;
@end
