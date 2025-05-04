@interface AWEGrouponTaskTopTabBubble : AWEGrouponBaseTask
- (id)uiComponentID;
- (id)uiComponentType;
- (void)executeWithContext:;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
