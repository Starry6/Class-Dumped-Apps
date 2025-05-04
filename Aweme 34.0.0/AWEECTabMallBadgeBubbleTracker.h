@interface AWEECTabMallBadgeBubbleTracker : NSObject
+ (void)trackBadgeHidden:withModel:source:;
+ (void)trackBadgeDowngrade:withModel:source:;
+ (void)trackBubbleShowResult:withBubbleInfo:source:;
+ (void)trackBubbleDismiss:withBubbleInfo:source:;
+ (void)trackBadgeEvent:withModel:andParams:;
+ (void)trackBadgeShowResult:withModel:params:;
+ (void)trackBubbleEvent:withBubbleInfo:andParams:;
+ (void)trackBadgeEvent:withParams:;
@end
