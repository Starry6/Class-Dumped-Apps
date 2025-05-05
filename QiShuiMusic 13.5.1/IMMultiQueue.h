@interface IMMultiQueue : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)_popEnqueuedBlockWithGUID:key:;
- (BOOL)addBlock:withTimeout:forKey:description:;
- (BOOL)addBlock:forKey:description:;
- (BOOL)_addBlock:withGUID:forKey:description:;
- (id)loggableOverview;
- (id)loggableOverviewForKey:;
@end
