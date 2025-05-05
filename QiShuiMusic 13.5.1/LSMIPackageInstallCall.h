@interface LSMIPackageInstallCall : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isUninstall;
- (id)invokeWithOptions:error:progressCallback:;
- (BOOL)validateEntitlementsOfConnection:withOptions:error:;
- (id)initWithBundleIdentifier:packageURL:;
+ (BOOL)supportsSecureCoding;
@end
