@interface RACSubscriptionScheduler : RACScheduler
@property (nonatomic) RACScheduler backgroundScheduler;
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)backgroundScheduler;
- (id)init;
- (id)schedule:;
- (void).cxx_destruct;
@end
