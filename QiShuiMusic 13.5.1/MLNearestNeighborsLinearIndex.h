@interface MLNearestNeighborsLinearIndex : NSObject
@property (nonatomic) Q numDataPoints;
@property (nonatomic) Q numDimensions;
- (unsigned long long)dataPointCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)findNearestNeighbors:toQueryPoint:;
- (id)findNearestNeighbors:toIndex:;
- (BOOL)updateWithData:error:;
- (id)initWithDataset:numberOfDimensions:;
- (unsigned long long)numDataPoints;
- (void)setNumDataPoints:;
- (unsigned long long)numDimensions;
- (void)setNumDimensions:;
+ (BOOL)supportsSecureCoding;
@end
