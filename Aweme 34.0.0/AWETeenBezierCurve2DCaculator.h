@interface AWETeenBezierCurve2DCaculator : NSObject
@property (nonatomic) NSArray controlPointers;
@property (nonatomic) q samplingCount;
@property (nonatomic) NSMutableArray pascalTriangleArray;
- (double)caculateValueWithX:minX:maxX:repeatCheckCount:;
- (id)initWithControlPointer:samplingCount:;
- (void)setControlPointers:;
- (void)setSamplingCount:;
- (void)setPascalTriangleArray:;
- (id)controlPointers;
- (long long)samplingCount;
- (id)pascalTriangleArray;
- (id)calculateValueWithSampleIndex:;
- (void)caculatePascalTriangle:newDegree:;
- (void)dealloc;
- (void).cxx_destruct;
@end
