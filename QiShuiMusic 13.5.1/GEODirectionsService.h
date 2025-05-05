@interface GEODirectionsService : NSObject
@property (nonatomic) NSURL directionsURL;
- (id)directionsURL;
- (id)init;
- (void).cxx_destruct;
- (id)requestDirections:handler:;
- (void)_submitDirectionsRequest:waypoints:auditToken:useBackgroundURL:requestPriority:allowRetry:handler:;
- (id)_directionsRequestForRequestParameters:waypoints:;
- (id)_feedbackForRequestParameters:;
- (id)_waypointsForModifyWaypointsRequest:;
- (id)_waypointsForRerouteWithWaypointsRequest:;
- (id)_waypointsForRequestParameters:;
- (id)_geoWaypointTypedForWaypoint:voiceLanguage:;
- (int)_routePurposeForRequestParameters:;
- (BOOL)_shouldAllowTimepointForRequestType:;
- (id)_geoOriginalWaypointRouteForRoute:routeCoordinate:waypoints:requestParameters:;
- (void)_setMiscFieldsOnDirectionsRequest:forRequestParameters:;
+ (id)sharedService;
+ (BOOL)canSpeakWrittenAddresses;
+ (BOOL)canSpeakWrittenPlaceNames;
+ (BOOL)_canCurrentVoiceLanguageHandleWrittenText;
@end
