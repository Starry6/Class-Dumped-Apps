@interface AWECommentMediaFeedService : NSObject
- (id)makeMediaFeed:params:;
- (void)transferToCommentMediaFeedWithData:params:;
- (void)enterMediaFeedVC:sceneType:appearType:;
- (void)showMediaFeedForLandscape:commentPanelWidth:;
- (void)showMediaFeedOnCurrentView:viewController:;
- (id)makePinchGuideAnimationViewWithConfig:;
- (id)init;
@end
