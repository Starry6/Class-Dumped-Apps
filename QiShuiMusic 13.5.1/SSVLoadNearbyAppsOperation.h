@interface SSVLoadNearbyAppsOperation : NSOperation
@property (nonatomic) CLLocation location;
@property (nonatomic) NSString pointOfInterestIdentifier;
@property (nonatomic) NSString pointOfInterestProviderIdentifier;
@property (nonatomic) NSString pointOfInterestProviderURL;
@property (nonatomic) @? responseBlock;
@property (nonatomic) NSString storeFrontSuffix;
@property (nonatomic) NSString userAgent;
- (id)userAgent;
- (void)setUserAgent:;
- (id)storeFrontSuffix;
- (id)location;
- (void)setStoreFrontSuffix:;
- (void)main;
- (void).cxx_destruct;
- (id)responseBlock;
- (void)setResponseBlock:;
- (id)_storeFrontSuffix;
- (id)initWithBaseURL:location:;
- (id)pointOfInterestIdentifier;
- (id)pointOfInterestProviderIdentifier;
- (id)pointOfInterestProviderURL;
- (void)setPointOfInterestIdentifier:;
- (void)setPointOfInterestProviderIdentifier:;
- (void)setPointOfInterestProviderURL:;
- (id)_lookupWithRequest:error:;
@end
