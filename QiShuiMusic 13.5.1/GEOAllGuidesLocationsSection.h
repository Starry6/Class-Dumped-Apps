@interface GEOAllGuidesLocationsSection : NSObject
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) NSArray guideLocations;
@property (nonatomic) NSArray guideLocationIdentifiers;
@property (nonatomic) NSDictionary pdGuideLocationEntries;
@property (nonatomic) BOOL isWorldwideSection;
- (void).cxx_destruct;
- (id)sectionTitle;
- (id)initWithAllGuidesLocationSection:mapsResults:;
- (id)guideLocationIdentifiers;
- (id)pdGuideLocationEntries;
- (id)guideLocations;
- (id)placeResultForSection:mapsResults:;
- (BOOL)isWorldwideSection;
@end
