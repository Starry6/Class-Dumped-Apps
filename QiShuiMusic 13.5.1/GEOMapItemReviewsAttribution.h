@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution
@property (nonatomic) NSArray addReviewURLs;
- (id)initWithSearchAttributionInfo:attributionURLs:yelpID:;
- (id)initWithSearchAttributionInfo:attributionURLs:poiID:;
- (id)addReviewURLs;
- (id)urlsForReview:;
- (id)urlsForSelectedItemWithItems:;
@end
