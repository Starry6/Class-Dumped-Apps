@interface AWEGrouponTaskHalfScreen : AWEGrouponBaseTask
- (id)uiComponentID;
- (id)uiComponentType;
- (void)executeWithContext:;
- (id)taskType;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
