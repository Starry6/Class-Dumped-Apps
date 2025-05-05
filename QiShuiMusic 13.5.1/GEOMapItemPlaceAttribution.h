@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution
@property (nonatomic) NSArray checkInURLs;
@property (nonatomic) NSURL webURL;
- (id)webURL;
- (id)initWithSearchAttributionInfo:attributionURLs:poiID:;
- (id)checkInURLs;
@end
