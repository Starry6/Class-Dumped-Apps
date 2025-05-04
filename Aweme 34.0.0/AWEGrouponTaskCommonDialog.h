@interface AWEGrouponTaskCommonDialog : AWEGrouponBaseTask
- (id)uiComponentID;
- (id)uiComponentType;
- (BOOL)coldStartLimit;
- (long long)useDefaultRule;
- (void)executeWithContext:;
- (id)taskType;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
