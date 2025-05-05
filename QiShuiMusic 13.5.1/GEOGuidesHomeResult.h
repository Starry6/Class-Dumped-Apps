@interface GEOGuidesHomeResult : NSObject
@property (nonatomic) GEOGuidesHomeFixedSection featuredGuidesSection;
@property (nonatomic) GEOGuidesHomeFixedSection filtersSection;
@property (nonatomic) GEOGuidesHomeFixedSection filteredGuidesSection;
@property (nonatomic) NSArray repeatableSections;
- (void).cxx_destruct;
- (id)initWithGuidesHomeFixedSection:mapsResults:;
- (id)guideLocationName:;
- (id)featuredGuidesSection;
- (id)filtersSection;
- (id)filteredGuidesSection;
- (id)repeatableSections;
@end
