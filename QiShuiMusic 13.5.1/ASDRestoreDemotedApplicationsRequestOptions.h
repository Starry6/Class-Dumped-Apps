@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions
@property (nonatomic) NSNumber accountID;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSArray bundleIDs;
- (id)bundleIDs;
- (id)appleID;
- (id)accountID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setBundleIDs:;
- (id)copyWithZone:;
- (id)initWithBundleIDs:;
- (id)initWithAccountID:appleID:;
+ (BOOL)supportsSecureCoding;
@end
