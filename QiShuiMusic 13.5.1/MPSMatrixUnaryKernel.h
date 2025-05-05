@interface MPSMatrixUnaryKernel : MPSKernel
@property (nonatomic) {?=QQQ} sourceMatrixOrigin;
@property (nonatomic) {?=QQQ} resultMatrixOrigin;
@property (nonatomic) Q batchStart;
@property (nonatomic) Q batchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)batchStart;
- (void)setBatchStart:;
- (void)setResultMatrixOrigin:;
- (void)setSourceMatrixOrigin:;
- (id)sourceMatrixOrigin;
- (id)resultMatrixOrigin;
@end
