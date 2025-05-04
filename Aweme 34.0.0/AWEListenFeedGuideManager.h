@interface AWEListenFeedGuideManager : NSObject
+ (void)showGestureGuideView:inView:;
+ (BOOL)needShowTopToastGuideView;
+ (void)showTopToastGuideView:inView:;
+ (void)updateHasShowListenEntranceGuideViewFor5Key;
+ (void)updateHasShowListenEntranceGuideViewForFirstEnterKey;
+ (void)showListenFeedPopupView:model:inView:;
+ (void)showEntranceGuideView:inView:targetPoint:;
+ (BOOL)isShowListenFeedPopupView;
+ (BOOL)isShowGestureGuideView;
+ (BOOL)shouldShowCollectGuideView;
+ (void)updateEnterListenFeedKey;
+ (void)updateListenFeedCountGreaterThan5Key;
+ (id)sharedInstance;
@end
