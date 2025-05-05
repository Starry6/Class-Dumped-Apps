@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration
@property (nonatomic) ASOOverlayAppClipConfiguration _backing;
@property (nonatomic) NSString campaignToken;
@property (nonatomic) NSString providerToken;
@property (nonatomic) NSString customProductPageIdentifier;
@property (nonatomic) NSString latestReleaseID;
@property (nonatomic) q position;
- (void)setPosition:;
- (long long)position;
- (id)_init;
- (id)initWithBacking:;
- (void)setCampaignToken:;
- (id)campaignToken;
- (void)setProviderToken:;
- (id)providerToken;
- (void)setCustomProductPageIdentifier:;
- (id)customProductPageIdentifier;
- (void)setLatestReleaseID:;
- (id)latestReleaseID;
- (void)setAdditionalValue:forKey:;
- (id)additionalValueForKey:;
- (id)initWithPosition:;
@end
