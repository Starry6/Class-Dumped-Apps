@interface LSStashedAppMetadata : NSObject
@property (nonatomic) NSString exactBundleVersion;
@property (nonatomic) NSString bundleShortVersion;
@property (nonatomic) NSDate dateStashed;
@property (nonatomic) NSDate dateOriginallyInstalled;
@property (nonatomic) NSString signerOrganization;
@property (nonatomic) BOOL profileValidated;
@property (nonatomic) BOOL UPPValidated;
@property (nonatomic) BOOL freeProfileValidated;
- (id)signerOrganization;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)exactBundleVersion;
- (void).cxx_destruct;
- (BOOL)isUPPValidated;
- (BOOL)isProfileValidated;
- (id)bundleShortVersion;
- (BOOL)isFreeProfileValidated;
- (id)initWithContext:unitID:;
- (id)dateStashed;
- (id)dateOriginallyInstalled;
+ (BOOL)supportsSecureCoding;
@end
