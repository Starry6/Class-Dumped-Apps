@interface RxImmediateScheduler : RxScheduler
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)init;
- (id)schedule:;
@end
