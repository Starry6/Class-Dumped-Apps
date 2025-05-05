@interface AMSRatingsProviderResult : NSObject
@property (nonatomic) NSArray ratingsStoreFronts;
- (void).cxx_destruct;
- (id)initWithURLResult:mediaType:andStoreFront:;
- (id)initWithData:mediaType:andStoreFront:;
- (id)initWithDictionaries:mediaType:andStoreFront:;
- (id)_mapRatingsDictionaries:withMediaType:andStoreFront:;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:;
- (id)ratingsStoreFronts;
@end
