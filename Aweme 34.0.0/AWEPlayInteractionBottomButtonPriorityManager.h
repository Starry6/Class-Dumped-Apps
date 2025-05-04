@interface AWEPlayInteractionBottomButtonPriorityManager : NSObject
- (BOOL)enableFeedButtonPriorityRefactor;
- (BOOL)buttonElementCache;
- (BOOL)shouldActivateElementNameAlloc;
+ (id)bottomButtonPriorityWithContext:;
+ (id)buttonPriorityElementMap;
+ (id)transformedPriorityForOriginalPriority:context:;
+ (id)buttonElementNameWithPriority:;
+ (id)sharedManager;
@end
