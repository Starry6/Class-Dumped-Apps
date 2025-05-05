@interface GEOJunction : NSObject
@property (nonatomic) NSInteger maneuverType;
@property (nonatomic) NSInteger drivingSide;
@property (nonatomic) NSInteger junctionType;
@property (nonatomic) ^{GEOJunctionElement=iii{?=b1b1b1}} elements;
@property (nonatomic) Q numElements;
- (id)elements;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)numElements;
- (int)maneuverType;
- (id)initWithStep:;
- (id)initWithManeuverType:drivingSide:;
- (id)initWithJunctionInfo:;
- (int)drivingSide;
- (int)junctionType;
+ (BOOL)supportsSecureCoding;
@end
