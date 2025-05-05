@interface CTRegistrationDisplayStatus : NSObject
@property (nonatomic) NSString registrationDisplayStatus;
@property (nonatomic) BOOL isInHomeCountry;
@property (nonatomic) BOOL changedDueToSimRemoval;
@property (nonatomic) BOOL isRegistrationForcedHome;
- (BOOL)isInHomeCountry;
- (void)setIsRegistrationForcedHome:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setChangedDueToSimRemoval:;
- (id)registrationDisplayStatus;
- (void).cxx_destruct;
- (id)description;
- (void)setRegistrationDisplayStatus:;
- (void)setIsInHomeCountry:;
- (BOOL)changedDueToSimRemoval;
- (BOOL)isRegistrationForcedHome;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
