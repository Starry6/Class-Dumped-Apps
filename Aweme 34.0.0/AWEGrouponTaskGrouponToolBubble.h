@interface AWEGrouponTaskGrouponToolBubble : AWEGrouponBaseTask
- (id)uiComponentID;
- (id)uiComponentType;
- (long long)useDefaultRule;
- (void)taskDiscarded;
- (void)executeWithContext:;
- (double)priority;
- (id)triggerType;
+ (void)_aweLazyRegisterStaticLoad;
@end
