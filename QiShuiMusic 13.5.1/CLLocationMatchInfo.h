@interface CLLocationMatchInfo : NSObject
@property (nonatomic) q matchQuality;
@property (nonatomic) {CLLocationCoordinate2D=dd} matchCoordinate;
@property (nonatomic) double matchCourse;
@property (nonatomic) NSInteger matchFormOfWay;
@property (nonatomic) NSInteger matchRoadClass;
@property (nonatomic) BOOL matchShifted;
@property (nonatomic) NSData matchDataArray;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithMatchQuality:matchCoordinate:matchCourse:matchFormOfWay:matchRoadClass:matchShifted:;
- (id)initWithCoder:;
- (int)matchRoadClass;
- (void)encodeWithCoder:;
- (int)matchFormOfWay;
- (id)matchCoordinate;
- (id)initWithMatchQuality:matchCoordinate:matchCourse:matchFormOfWay:matchRoadClass:matchShifted:matchDataArray:;
- (long long)matchQuality;
- (id)description;
- (double)matchCourse;
- (BOOL)isMatchShifted;
- (id)copyWithZone:;
- (id)matchDataArray;
+ (BOOL)supportsSecureCoding;
@end
