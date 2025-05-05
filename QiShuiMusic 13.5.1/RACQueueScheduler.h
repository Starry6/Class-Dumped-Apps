@interface RACQueueScheduler : RACScheduler
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)initWithName:queue:;
- (id)schedule:;
- (void).cxx_destruct;
- (id)queue;
+ (unsigned long long)wallTimeWithDate:;
@end
