@interface BLSAttribute : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)canBePaused;
- (BOOL)checkEntitlementSource:forSingleEntitlement:error:;
- (id)errorForMissingEntitlement:inSource:;
+ (BOOL)supportsSecureCoding;
@end
