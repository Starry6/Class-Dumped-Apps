@interface FBSApplicationProvisioningProfile : NSObject
@property (nonatomic) NSString signerIdentity;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL appleInternalProfile;
@property (nonatomic) BOOL beta;
@property (nonatomic) BOOL freeDeveloperProfile;
@property (nonatomic) BOOL provisionsAllDevices;
@property (nonatomic) BOOL provisionsThisDevice;
@property (nonatomic) NSString UUID;
- (BOOL)isBeta;
- (id)signerIdentity;
- (id)succinctDescriptionBuilder;
- (id)expirationDate;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)UUID;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)initWithSignerIdentity:profile:;
- (BOOL)allowsApplicationIdentifierEntitlement:;
- (BOOL)isAppleInternalProfile;
- (BOOL)isFreeDeveloperProfile;
- (BOOL)provisionsAllDevices;
- (BOOL)provisionsThisDevice;
@end
