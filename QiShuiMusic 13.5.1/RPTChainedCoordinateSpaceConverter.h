@interface RPTChainedCoordinateSpaceConverter : RPTCoordinateSpaceConverter
@property (nonatomic) RPTCoordinateSpaceConverter primary;
@property (nonatomic) RPTCoordinateSpaceConverter secondary;
- (id)primary;
- (void)setPrimary:;
- (id)convertRect:;
- (void).cxx_destruct;
- (id)convertVector:;
- (id)convertSize:;
- (id)convertPoint:;
- (id)secondary;
- (void)setSecondary:;
- (id)initWithPrimary:secondary:;
@end
