@interface AWELVDiversionAwemeRouteHandler : NSObject
+ (void)transitionWithTransitionInfo:;
+ (void)fetchMediaAssetsWithMediaPaths:blockToast:logExtra:completion:;
+ (void)ensureLoginWithTitle:logExtra:completion:;
+ (void)ensureDoubleCheckWithParams:logExtra:completion:;
+ (void)fetchMediaAssetsWithMediaPaths:blockToast:authorization:logExtra:needTrackClick:completion:;
+ (void)realFetchMediaAssetsWithMediaPaths:completion:;
+ (void)buildPopup:logExtra:clickCompletion:closeCompletion:;
@end
