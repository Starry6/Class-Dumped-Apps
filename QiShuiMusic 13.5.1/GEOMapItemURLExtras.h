@interface GEOMapItemURLExtras : NSObject
+ (id)urlToPresentAction:present:;
+ (id)urlToPresentDirectionsForItems:options:;
+ (id)urlToPresentDirectionsFromCurrentLocationToMapItem:withOptions:;
+ (id)_mapItemsFromPresentAction:hasCurrentLocation:currentLocationIndex:options:;
+ (id)_mapItemsFromPresentAction:currentLocationIndices:options:;
+ (id)_mapItemsFromDirectionsAction:hasCurrentLocation:currentLocationIndex:options:;
+ (id)_mapItemsFromDirectionsAction:currentLocationIndices:options:;
+ (id)mapItemsFromURL:hasCurrentLocation:currentLocationIndex:options:;
+ (id)mapItemsFromURL:currentLocationIndices:options:;
@end
