@interface AWEGrouponTaskLiveScreen : AWEGrouponBaseTask
- (void)executeWithContext:;
- (id)taskType;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
