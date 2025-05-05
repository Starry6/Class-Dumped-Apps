@interface DMFSecurityInformation : NSObject
@property (nonatomic) BOOL supportsBlockLevelEncryption;
@property (nonatomic) BOOL supportsFileLevelEncryption;
@property (nonatomic) BOOL passcodeIsSet;
@property (nonatomic) BOOL passcodeIsCompliantWithGlobalRestrictions;
@property (nonatomic) BOOL passcodeIsCompliantWithProfileRestrictions;
@property (nonatomic) Q passcodeLockGracePeriod;
@property (nonatomic) Q passcodeLockGracePeriodEnforced;
- (unsigned long long)passcodeLockGracePeriod;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)supportsBlockLevelEncryption;
- (BOOL)supportsFileLevelEncryption;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSupportsBlockLevelEncryption:supportsFileLevelEncryption:passcodeIsSet:passcodeIsCompliantWithGlobalRestrictions:passcodeIsCompliantWithProfileRestrictions:passcodeLockGracePeriodEnforced:passcodeLockGracePeriod:;
- (BOOL)passcodeIsSet;
- (BOOL)passcodeIsCompliantWithGlobalRestrictions;
- (BOOL)passcodeIsCompliantWithProfileRestrictions;
- (unsigned long long)passcodeLockGracePeriodEnforced;
+ (BOOL)supportsSecureCoding;
@end
