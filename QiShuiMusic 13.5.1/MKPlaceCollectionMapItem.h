@interface MKPlaceCollectionMapItem : NSObject
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) GEOPlaceCollectionItem placeCollectionItem;
@property (nonatomic) GEOQuickLink appClip;
- (id)mapItem;
- (void).cxx_destruct;
- (id)description;
- (id)appClip;
- (id)initWithMapItem:placeCollectionItem:;
- (id)placeCollectionItem;
@end
