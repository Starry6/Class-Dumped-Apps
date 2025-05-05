@interface AKBeneficiaryManifest : NSObject
@property (nonatomic) NSArray accessibleBundleInformation;
@property (nonatomic) q manifestOptions;
@property (nonatomic) NSDictionary parsableRepresentation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithBundleInformation:manifestOptions:;
- (id)parsableRepresentation;
- (id)_bundleTypeFrom:;
- (BOOL)_isAllOptionsSelected;
- (id)accessibleBundleInformation;
- (long long)manifestOptions;
+ (BOOL)supportsSecureCoding;
@end
