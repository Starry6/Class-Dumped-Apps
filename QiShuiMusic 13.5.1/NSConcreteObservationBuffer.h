@interface NSConcreteObservationBuffer : NSObservationBuffer
- (void)dealloc;
- (void)_receiveBox:;
- (id)initWithMaximumObjectCount:fullPolicy:outputQueue:;
- (void)_alreadyOnQueueEmitObject;
- (void)emitObject;
- (void)_alreadyOnQueueEmitAllObjects;
- (void)emitAllObjects;
- (void)_mergeChanges;
- (id)bufferFullHandler;
- (void)setBufferFullHandler:;
- (BOOL)automaticallyEmitsObjects;
- (void)setAutomaticallyEmitsObjects:;
- (BOOL)isMemoryPressureSensitive;
- (void)setMemoryPressureSensitive:;
@end
