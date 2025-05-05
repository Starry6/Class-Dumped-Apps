@interface MNLocationMatchInfo : NSObject
@property (nonatomic) q matchQuality;
@property (nonatomic) {CLLocationCoordinate2D=dd} matchCoordinate;
@property (nonatomic) double matchCourse;
@property (nonatomic) NSInteger matchFormOfWay;
@property (nonatomic) NSInteger matchRoadClass;
@property (nonatomic) BOOL matchShifted;
@property (nonatomic) NSData matchDataArray;
- (int)matchRoadClass;
- (int)matchFormOfWay;
- (void).cxx_destruct;
- (id)matchCoordinate;
- (id)initWithMatchQuality:matchCoordinate:matchCourse:matchFormOfWay:matchRoadClass:matchShifted:matchDataArray:;
- (long long)matchQuality;
- (double)matchCourse;
- (id)matchDataArray;
- (BOOL)matchShifted;
@end
