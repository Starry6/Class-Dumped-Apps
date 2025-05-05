@interface MKURLSerializer : NSObject
- (id)urlForOpeningMapItems:options:;
- (id)urlForDirectionsFromMapItem:toMapItem:transportType:options:;
- (id)urlForDirectionsWithMapItems:transportType:options:;
- (id)mapItemsFromUrl:options:;
+ (id)stringForMapType:;
+ (id)stringForDirectionsType:;
@end
