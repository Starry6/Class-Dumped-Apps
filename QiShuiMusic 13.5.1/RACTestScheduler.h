@interface RACTestScheduler : RACScheduler
@property (nonatomic) ^{__CFBinaryHeap=} scheduledActions;
@property (nonatomic) Q numberOfDirectlyScheduledBlocks;
- (void)stepAll;
- (id)after:schedule:;
- (unsigned long long)numberOfDirectlyScheduledBlocks;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)scheduledActions;
- (void)setNumberOfDirectlyScheduledBlocks:;
- (id)init;
- (void)dealloc;
- (void)step;
- (void)step:;
- (id)schedule:;
@end
