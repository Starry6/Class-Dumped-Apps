@interface PLInstrumentedOperationQueue : NSOperationQueue
@property (nonatomic) @? pl_operationCountChangedBlock;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)pl_operationCountChangedBlock;
- (void)setPl_operationCountChangedBlock:;
@end
