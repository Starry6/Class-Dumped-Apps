@interface MPSMatrixBinaryKernel : MPSKernel
@property (nonatomic) {?=QQQ} primarySourceMatrixOrigin;
@property (nonatomic) {?=QQQ} secondarySourceMatrixOrigin;
@property (nonatomic) {?=QQQ} resultMatrixOrigin;
@property (nonatomic) Q batchStart;
@property (nonatomic) Q batchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)batchStart;
- (void)setBatchStart:;
- (void)setResultMatrixOrigin:;
- (id)resultMatrixOrigin;
- (id)primarySourceMatrixOrigin;
- (void)setPrimarySourceMatrixOrigin:;
- (id)secondarySourceMatrixOrigin;
- (void)setSecondarySourceMatrixOrigin:;
@end
