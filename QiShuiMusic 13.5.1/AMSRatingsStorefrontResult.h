@interface AMSRatingsStorefrontResult : NSObject
@property (nonatomic) NSArray ratingsStoreFronts;
- (void).cxx_destruct;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:;
- (id)ratingsStoreFronts;
- (id)initWithURLResult:mediaType:;
- (id)initWithData:mediaType:;
- (id)initWithDictionaries:mediaType:;
- (id)_mapRatingsDictionaries:withMediaType:;
@end
