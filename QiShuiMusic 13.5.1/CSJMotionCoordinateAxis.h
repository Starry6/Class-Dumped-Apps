@interface CSJMotionCoordinateAxis : NSObject
@property (nonatomic) q xAxis;
@property (nonatomic) q yAxis;
@property (nonatomic) q zAxis;
- (long long)coordinateDirectionWithValue:;
- (void)setZAxis:;
- (long long)zAxis;
- (id)debugDescription;
- (id)initWithX:y:z:;
- (long long)yAxis;
- (long long)xAxis;
- (void)setXAxis:;
- (void)setYAxis:;
@end
