@interface AWENearbyTaskFeedPartlyRefresh : AWENearbyBaseTask
- (void)executeWithContext:;
- (id)triggerType;
+ (void)_aweLazyRegisterStaticLoad;
@end
