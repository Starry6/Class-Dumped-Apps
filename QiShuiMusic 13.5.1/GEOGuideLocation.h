@interface GEOGuideLocation : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) Q numberOfGuides;
@property (nonatomic) GEOMapItemIdentifier guideLocationIdentifier;
@property (nonatomic) NSString country;
- (id)country;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithChildAction:;
- (id)initWithWorldwideGuideLocation:;
- (id)initWithGuideLocation:;
- (id)initWithGuideLocation:mapsResult:;
- (id)pdWorldwideLocationEntry;
- (id)pdLocationEntry;
- (unsigned long long)numberOfGuides;
- (id)photosForType:;
- (id)guideLocationIdentifier;
+ (id)guideLocationsForEntries:mapsResults:;
@end
