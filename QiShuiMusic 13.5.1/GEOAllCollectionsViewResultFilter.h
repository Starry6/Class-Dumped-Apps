@interface GEOAllCollectionsViewResultFilter : NSObject
@property (nonatomic) q filterType;
@property (nonatomic) GEOAllCollectionsViewResultFilterTypeAddress addressFilter;
@property (nonatomic) GEOAllCollectionsViewResultFilterTypeKeyword keywordFilter;
- (long long)filterType;
- (void).cxx_destruct;
- (id)addressFilter;
- (id)keywordFilter;
- (id)initWithAllCollectionsViewResultFilter:withPlaces:;
@end
