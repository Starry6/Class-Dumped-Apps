@interface GEOGuidesHomeFixedSection : NSObject
@property (nonatomic) q sectionType;
@property (nonatomic) NSArray featuredGuides;
@property (nonatomic) NSArray filters;
@property (nonatomic) NSArray filteredGuides;
@property (nonatomic) NSArray filteredGuideIds;
@property (nonatomic) NSString title;
- (long long)sectionType;
- (id)filters;
- (id)title;
- (void).cxx_destruct;
- (id)initWithGuidesHomeFixedSection:mapsResults:;
- (id)featuredGuides;
- (id)filteredGuides;
- (id)filteredGuideIds;
- (id)guideResultsFromMapResults;
@end
