@interface RxMainQueueScheduler : RxQueueScheduler
- (id)initWithName:;
- (id)schedule:;
+ (BOOL)supportRunLoop;
@end
