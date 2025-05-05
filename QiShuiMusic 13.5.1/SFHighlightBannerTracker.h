@interface SFHighlightBannerTracker : NSObject
- (void)load;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (void)_saveOnInteralQueue;
- (void)isBannerBlockedForHighlight:completion:;
- (void)blockBannerForHighlight:;
- (void)unblockBannerForHighlight:;
+ (id)sharedTracker;
@end
