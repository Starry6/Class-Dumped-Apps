@interface GEOMapAccessLine : NSObject
@property (nonatomic) Q coordinateCount;
@property (nonatomic) ^{?=dd} coordinates;
@property (nonatomic) double length;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (double)length;
- (id).cxx_construct;
- (id)coordinates;
- (id)initWithMap:edge:;
- (double)distanceFromCoordinate:outSegmentCoordinate:;
- (unsigned long long)coordinateCount;
@end
