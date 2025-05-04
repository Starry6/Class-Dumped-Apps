@interface AWEGrouponUndertakeGuideBubble : NSObject
+ (void)showUnderTakeBubbleIfNeedWithEnterBubble:pageType:;
+ (void)showDialogClickedBubbleIfNeedWithEnterBubble:pageType:;
+ (void)shouldShowUndertakeBubbleWithPageType:;
+ (id)getUndertakeEnterBubbleWithPageType:;
+ (void)updateNeedShowDialogClickBubble:;
+ (BOOL)getNeedShowDialogClickBubble;
+ (id)transformGuideBubbleWithEnterBubble:;
+ (BOOL)shouldShowTabGuideBubbleWithBubbleModel:triggerType:;
+ (void)doShowBubbleWithEnterBubble:pageType:;
+ (void)doShowBubbleWithEnterBubble:pageType:task:;
+ (void)updateBubbleFrequencyKeyWithBubbleModel:;
+ (void)showTaskBubbleWithEnterBubble:pageType:task:;
@end
