@interface MPSTemporaryVector : MPSVector
@property (nonatomic) Q readCount;
- (id)initWithCommandBuffer:descriptor:;
- (void)synchronizeOnCommandBuffer:;
- (unsigned long long)readCount;
- (void)setReadCount:;
+ (id)temporaryVectorWithCommandBuffer:descriptor:;
+ (void)prefetchStorageWithCommandBuffer:descriptorList:;
@end
