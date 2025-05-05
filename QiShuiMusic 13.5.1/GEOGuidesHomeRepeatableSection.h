@interface GEOGuidesHomeRepeatableSection : NSObject
@property (nonatomic) NSArray guideLocations;
@property (nonatomic) NSArray curatedGuides;
@property (nonatomic) NSArray publishers;
@property (nonatomic) q sectionType;
@property (nonatomic) q contentType;
@property (nonatomic) NSString title;
- (long long)sectionType;
- (id)publishers;
- (long long)contentType;
- (id)title;
- (void).cxx_destruct;
- (id)guideLocations;
- (id)curatedGuides;
- (id)initWithGuidesHomeRepeatableSection:mapsResults:;
@end
