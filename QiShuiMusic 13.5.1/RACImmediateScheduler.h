@interface RACImmediateScheduler : RACScheduler
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)scheduleRecursiveBlock:;
- (id)init;
- (id)schedule:;
@end
