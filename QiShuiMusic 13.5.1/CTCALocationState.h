@interface CTCALocationState : NSObject
@property (nonatomic) q locationAcquisitionStatus;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (long long)locationAcquisitionStatus;
- (void)setLocationAcquisitionStatus:;
+ (BOOL)supportsSecureCoding;
@end
