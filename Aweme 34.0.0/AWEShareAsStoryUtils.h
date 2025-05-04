@interface AWEShareAsStoryUtils : NSObject
+ (BOOL)enableShareVideoAsStoryPermissionOptimation;
+ (BOOL)isInFeedRootVC;
+ (BOOL)isTopViewControllerInFollow;
+ (BOOL)isTopViewControllerInRecommend;
+ (BOOL)isTopViewControllerInFriends;
+ (BOOL)p_publishEnabled;
+ (BOOL)shouldEnableShareAsStoryWithAwemeModel:;
+ (void)setupCanvasBackgroundWithPublishModel:useGradientBackground:backgroundImage:backgroundImageData:playerSize:;
+ (void)setupCanvasConfigWithPublishModel:useGradientBackground:topColor:bottomColor:backgroundImage:;
+ (BOOL)isEnabledWithAwemeModel:authorIsCurrentUser:;
+ (BOOL)isPrepareWithAwemeModel:;
+ (void)addTodayInThePastStickerWithParamsModel:editorConfig:publishViewModel:locationX:locationY:;
+ (BOOL)checkCanShareAwemeForVideoLength:;
+ (BOOL)isSupportedCommentModel:;
+ (double)addInfoStickerWithText:videoSize:videoScale:playerSize:editorConfig:;
@end
