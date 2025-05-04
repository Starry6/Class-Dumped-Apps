@interface AWEInTodayPlayerRouter : NSObject
+ (id)trackPushEnterFrom;
+ (id)processParamsIfNeededWithOriginalDict:;
+ (void)autoLandingTabIfNeededWithParamsDict:completion:;
+ (void)normalJumpWithParamsDic:landingVC:transitionInfo:;
+ (void)routeToEditorWithParams:transitionInfo:;
@end
