@interface GEOSpatialPlaceLookupResult : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithMapItemMap:resultItemMap:;
- (id)mapItemsForSpatialLookupParameters:;
- (id)resultItemForSpatialLookupParameters:;
@end
