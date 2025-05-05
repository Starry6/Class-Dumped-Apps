@interface MPSNNGridSample : MPSCNNBinaryKernel
@property (nonatomic) BOOL useGridValueAsInputCoordinate;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setUseGridValueAsInputCoordinate:;
- (BOOL)useGridValueAsInputCoordinate;
+ (id)libraryInfo:;
@end
