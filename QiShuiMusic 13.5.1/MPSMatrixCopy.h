@interface MPSMatrixCopy : MPSKernel
@property (nonatomic) Q copyRows;
@property (nonatomic) Q copyColumns;
@property (nonatomic) BOOL sourcesAreTransposed;
@property (nonatomic) BOOL destinationsAreTransposed;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:copyRows:copyColumns:sourcesAreTransposed:destinationsAreTransposed:;
- (void)encodeToCommandBuffer:copyDescriptor:;
- (void)encodeToCommandBuffer:copyDescriptor:rowPermuteIndices:rowPermuteOffset:columnPermuteIndices:columnPermuteOffset:;
- (void)encodeToCommandBuffer:encoder:copyDescriptor:rowPermuteIndices:rowPermuteOffset:columnPermuteIndices:columnPermuteOffset:;
- (unsigned long long)copyRows;
- (unsigned long long)copyColumns;
- (BOOL)sourcesAreTransposed;
- (BOOL)destinationsAreTransposed;
+ (id)libraryInfo:;
@end
