@interface EKTravelLookupManager : NSObject
- (void)travelTimeFrom:to:arrivalDate:withRouteType:withCompletionBlock:;
- (void)travelTimeFrom:to:arrivalDate:withRouteTypes:withCompletionBlock:;
- (void)_travelTimeWithStartCoordinate:endCoordinate:arrivalDate:withRouteType:completionBlock:;
- (void)_updateLocation:withMapItem:forRoute:withCompletionBlock:;
- (void)findCoordinatesForLocation:completionBlock:;
+ (id)defaultManager;
+ (void)geocodeAddress:withCompletionBlock:;
+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:withCompletionBlock:;
@end
