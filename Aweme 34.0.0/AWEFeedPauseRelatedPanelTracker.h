@interface AWEFeedPauseRelatedPanelTracker : NSObject
+ (id)commonParams:;
+ (void)trackTitleToastShow:enterMethod:;
+ (void)trackTitleToastClose:closeMethod:stayTime:;
+ (void)trackTitleToastSlide:enterMethod:;
@end
