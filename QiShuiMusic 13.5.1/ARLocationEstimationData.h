@interface ARLocationEstimationData : NSObject
@property (nonatomic) double heading;
@property (nonatomic) CLLocation location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)heading;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoordinates:altitude:heading:;
- (id)initWithLocation:heading:;
+ (BOOL)supportsSecureCoding;
@end
