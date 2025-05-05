@interface OS_dispatch_data_empty : OS_dispatch_data
- (void)_setContext:;
- (id)_getContext;
- (void)_setTargetQueue:;
- (id)autorelease;
- (void)_suspend;
- (id)release;
- (id)retain;
- (void)_activate;
- (unsigned long long)retainCount;
- (void)_setFinalizer:;
- (void)_resume;
+ (id)allocWithZone:;
@end
