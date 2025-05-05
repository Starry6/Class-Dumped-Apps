@interface GEOLocationShiftFunctionResponse : NSObject
@property (nonatomic) {?=dd} originalCoordinate;
@property (nonatomic) double radius;
@property (nonatomic) I version;
- (unsigned int)version;
- (double)radius;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)initWithPolyLocationShiftResponse:originalCoordinate:version:;
- (id)contractFunctionTo:withRadius:;
- (id)shiftedCoordinateForCoordinate:accuracy:;
- (BOOL)isValidForCoordinate:;
- (id)originalCoordinate;
+ (BOOL)supportsSecureCoding;
@end
