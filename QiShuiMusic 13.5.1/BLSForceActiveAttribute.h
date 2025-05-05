@interface BLSForceActiveAttribute : BLSAttribute
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
- (id)description;
- (BOOL)userInitiated;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUserInitiated:;
+ (BOOL)supportsSecureCoding;
+ (id)forceActive;
+ (id)forceActiveUserInitiated:;
@end
