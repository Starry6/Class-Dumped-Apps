@interface RxQueueScheduler : RxScheduler
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)initWithName:queue:;
- (void)dealloc;
- (id)schedule:;
- (void).cxx_destruct;
- (id)queue;
+ (unsigned long long)wallTimeWithDate:;
@end
