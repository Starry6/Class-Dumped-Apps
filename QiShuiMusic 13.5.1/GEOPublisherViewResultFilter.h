@interface GEOPublisherViewResultFilter : NSObject
@property (nonatomic) q filterType;
@property (nonatomic) GEOPublisherViewResultFilterAddress addressFilter;
@property (nonatomic) GEOPublisherViewResultFilterKeyword keywordFilter;
- (long long)filterType;
- (void).cxx_destruct;
- (id)initWithPublisherViewResultFilter:withPlaces:;
- (id)addressFilter;
- (id)keywordFilter;
@end
