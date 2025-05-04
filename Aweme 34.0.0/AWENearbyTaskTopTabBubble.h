@interface AWENearbyTaskTopTabBubble : AWENearbyBaseTask
- (id)uiComponentID;
- (id)uiComponentType;
- (void)executeWithContext:;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
