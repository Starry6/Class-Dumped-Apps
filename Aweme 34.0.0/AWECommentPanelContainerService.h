@interface AWECommentPanelContainerService : NSObject
- (id)businessContainerService;
- (double)commentAnimatorDurationWithType:;
- (void)commentAnimatorWithType:animations:completion:;
- (id)makeTabContextWithCommentPageContext:;
- (id)createCommentPanelController:contextParams:customConfigModel:;
- (id)watermarkManager;
- (id)init;
@end
