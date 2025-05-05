@interface ICInAppMessageEntry : NSObject
@property (nonatomic) ICIAMApplicationMessage applicationMessage;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) BOOL shouldDownloadResources;
@property (nonatomic) BOOL didCacheRequiredResources;
@property (nonatomic) BOOL isBadgingApplication;
- (void)setCacheLocation:forResourceWithIdentifier:;
- (id)allCachedResourceLocations;
- (id)bundleIdentifier;
- (BOOL)isBadgingApplication;
- (void)clearCachedResources;
- (id)metadata;
- (id)applicationMessage;
- (BOOL)didCacheRequiredResources;
- (id)initWithCoder:;
- (id)initWithApplicationMessage:bundleIdentifier:;
- (void)setIsBadgingApplication:;
- (BOOL)shouldDownloadResources;
- (void)encodeWithCoder:;
- (void)updateMetadataValue:forKey:;
- (void).cxx_destruct;
- (void)setDidCacheRequiredResources:;
- (id)description;
- (id)cachedLocationForResourceWithIdentifier:;
- (void)setShouldDownloadResources:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
