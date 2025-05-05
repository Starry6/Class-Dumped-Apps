@interface GEOSearchSection : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q sectionType;
@property (nonatomic) GEOSearchSectionGuide sectionGuide;
@property (nonatomic) GEOSearchSectionPlace sectionPlace;
- (long long)sectionType;
- (id)init;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:sectionType:sectionGuide:sectionPlace:;
- (id)initWithSearchSection:mapsResults:;
- (id)sectionGuide;
- (id)sectionPlace;
@end
