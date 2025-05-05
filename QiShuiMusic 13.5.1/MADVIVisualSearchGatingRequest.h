@interface MADVIVisualSearchGatingRequest : MADRequest
@property (nonatomic) NSNumber queryID;
@property (nonatomic) CLLocation location;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSURL referralURL;
@property (nonatomic) NSNumber imageType;
@property (nonatomic) NSArray domains;
@property (nonatomic) NSString featureIdentifier;
- (id)queryID;
- (id)imageType;
- (id)featureIdentifier;
- (id)initWithCoder:;
- (void)setQueryID:;
- (id)location;
- (void)encodeWithCoder:;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setDomains:;
- (id)description;
- (id)domains;
- (void)setImageURL:;
- (void)setImageType:;
- (id)imageURL;
- (void)setFeatureIdentifier:;
- (id)referralURL;
- (void)setReferralURL:;
+ (BOOL)supportsSecureCoding;
@end
