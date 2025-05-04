@interface AWEGrouponTaskFeedPartlyRefresh : AWEGrouponBaseTask
- (void)executeWithContext:;
- (id)triggerType;
+ (void)_aweLazyRegisterStaticLoad;
@end
