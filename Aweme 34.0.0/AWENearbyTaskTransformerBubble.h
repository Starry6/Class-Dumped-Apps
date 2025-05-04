@interface AWENearbyTaskTransformerBubble : AWENearbyBaseTask
- (id)uiComponentID;
- (id)uiComponentType;
- (void)executeWithContext:;
- (id)taskType;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
