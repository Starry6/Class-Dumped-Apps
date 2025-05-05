@interface MPSMatrixSoftMax : MPSMatrixUnaryKernel
@property (nonatomic) Q sourceRows;
@property (nonatomic) Q sourceColumns;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setSourceRows:;
- (void)setSourceColumns:;
- (void)encodeToCommandBuffer:inputMatrix:resultMatrix:;
- (unsigned long long)sourceColumns;
- (unsigned long long)sourceRows;
+ (id)libraryInfo:;
@end
