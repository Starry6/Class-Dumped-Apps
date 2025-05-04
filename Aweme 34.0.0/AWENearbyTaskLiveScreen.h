@interface AWENearbyTaskLiveScreen : AWENearbyBaseTask
- (void)executeWithContext:;
- (id)taskType;
- (double)priority;
+ (void)_aweLazyRegisterStaticLoad;
@end
