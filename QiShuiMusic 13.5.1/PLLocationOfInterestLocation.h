@interface PLLocationOfInterestLocation : NSObject
@property (nonatomic) CLLocation location;
@property (nonatomic) double uncertainty;
- (double)uncertainty;
- (id)location;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:uncertainty:;
- (double)distanceFromLocation:withTypeRadius:;
@end
