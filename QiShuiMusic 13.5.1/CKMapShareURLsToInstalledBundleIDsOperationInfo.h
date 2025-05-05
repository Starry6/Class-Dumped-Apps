@interface CKMapShareURLsToInstalledBundleIDsOperationInfo : CKOperationInfo
@property (nonatomic) NSArray shareURLs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)shareURLs;
- (void)setShareURLs:;
+ (BOOL)supportsSecureCoding;
@end
