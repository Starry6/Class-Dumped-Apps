@interface AWEFullScreenTransitionEggManager : NSObject
+ (BOOL)hasFullScreenTransitionEgg:;
+ (void)playFullScreenTransitionEggWithAweme:fullScreenBlock:;
+ (id)preRenderFullScreenTransitionEgg:aweme:autoShow:fullScreenBlock:;
+ (void)showTransitionEggView:onView:aweme:eggInfo:;
+ (void)playFullScreenTransitionEggWithAweme:imageName:fullScreenBlock:;
+ (void)trackerPreloadEventWithAweme:label:adExtraData:;
+ (void)playFullScreenTransitionEgg:aweme:fullScreenBlock:;
+ (void)preloadFullScreenTransitionEggIfNeeded:;
@end
