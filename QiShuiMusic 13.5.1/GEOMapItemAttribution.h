@interface GEOMapItemAttribution : NSObject
@property (nonatomic) NSString providerID;
@property (nonatomic) NSString providerName;
@property (nonatomic) NSString captionDisplayName;
@property (nonatomic) NSArray attributionURLs;
@property (nonatomic) NSArray attributionApps;
@property (nonatomic) NSString webBaseActionURL;
@property (nonatomic) BOOL shouldOpenInAppStore;
@property (nonatomic) BOOL requiresAttributionInCallout;
@property (nonatomic) NSString appAdamID;
- (id)providerID;
- (id)providerName;
- (void).cxx_destruct;
- (id)appAdamID;
- (id)attributionURLs;
- (id)attributionApps;
- (id)webBaseActionURL;
- (BOOL)shouldOpenInAppStore;
- (id)captionDisplayName;
- (id)initWithSearchAttributionInfo:attributionURLs:;
- (id)initWithSearchAttributionInfo:attributionURLs:yelpID:;
- (id)initWithSearchAttributionInfo:attributionURLs:poiID:;
- (id)providerLogoPathForScale:;
- (id)providerSnippetLogoPathForScale:;
- (BOOL)requiresAttributionInCallout;
- (id)_yelpHTTPURLForRequirement:withUID:writeAReview:;
+ (id)attributionWithDataAttribution:searchInfo:class:;
@end
