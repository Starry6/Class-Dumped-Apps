@interface NSObservationBuffer : NSObservationTransformer
@property (nonatomic) BOOL memoryPressureSensitive;
@property (nonatomic) @? bufferFullHandler;
@property (nonatomic) BOOL automaticallyEmitsObjects;
- (id)initWithMaximumObjectCount:fullPolicy:outputQueue:;
- (void)emitObject;
- (void)emitAllObjects;
- (id)bufferFullHandler;
- (void)setBufferFullHandler:;
- (BOOL)automaticallyEmitsObjects;
- (void)setAutomaticallyEmitsObjects:;
- (BOOL)isMemoryPressureSensitive;
- (void)setMemoryPressureSensitive:;
+ (id)allocWithZone:;
+ (id)bufferWithOutputQueue:;
+ (id)bufferWithMaximumObjectCount:fullPolicy:outputQueue:;
@end
