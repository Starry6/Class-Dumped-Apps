@interface MPSTemporaryNDArray : MPSNDArray
@property (nonatomic) Q readCount;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithCommandBuffer:descriptor:;
- (void)synchronizeOnCommandBuffer:;
- (unsigned long long)readCount;
- (void)setReadCount:;
- (id)initWithCommandBuffer:descriptor:buffer:;
- (id)temporaryArrayViewWithCommandBuffer:computeEncoder:descriptor:aliasing:;
- (id)temporaryArrayViewWithCommandBuffer:descriptor:aliasing:;
+ (id)defaultAllocator;
+ (id)temporaryNDArrayWithCommandBuffer:descriptor:;
@end
