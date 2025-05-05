@interface CPLane : NSObject
@property (nonatomic) S index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) S index;
@property (nonatomic) C status;
@property (nonatomic) NSMeasurement primaryAngle;
@property (nonatomic) NSArray secondaryAngles;
- (void)setStatus:;
- (id)init;
- (id)initWithCoder:;
- (unsigned short)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)primaryAngle;
- (void)setPrimaryAngle:;
- (id)secondaryAngles;
- (void)setSecondaryAngles:;
+ (BOOL)supportsSecureCoding;
+ (id)accNavParameters;
@end
