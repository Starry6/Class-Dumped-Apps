@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel
@property (nonatomic) BOOL alongColumns;
@property (nonatomic) Q sourceRows;
@property (nonatomic) Q sourceColumns;
@property (nonatomic) Q indexOffset;
@property (nonatomic) Q numberOfTopKValues;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)setSourceRows:;
- (void)setSourceColumns:;
- (unsigned long long)sourceColumns;
- (unsigned long long)sourceRows;
- (id)initWithDevice:numberOfTopKValues:;
- (void)encodeToCommandBuffer:inputMatrix:resultIndexMatrix:resultValueMatrix:;
- (unsigned long long)indexOffset;
- (void)setIndexOffset:;
- (unsigned long long)numberOfTopKValues;
- (void)setNumberOfTopKValues:;
- (BOOL)alongColumns;
- (void)setAlongColumns:;
+ (id)libraryInfo:;
@end
