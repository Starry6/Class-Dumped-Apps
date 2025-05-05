@interface GEOQuickETARequester : NSObject
- (id)initWithRequest:;
- (void)cancel;
- (void).cxx_destruct;
- (void)_calculateSimpleETAFromAPI:WithHandler:;
- (void)_calculateSimpleETAFromAPI:includeSummary:WithHandler:;
- (void)_calculateRoutingETAWithHandler:;
- (void)_calculateRoutingETAWithSummary:handler:;
- (void)calculateETAWithResponseHandler:;
- (void)calculateETAFromAPI:WithResponseHandler:;
- (void)calculateETAFromAPI:includeSummary:WithResponseHandler:;
+ (BOOL)requestTrafficAndETAFromWaypoint:toWaypoints:transportType:automobileOptions:handler:;
+ (BOOL)requestETAFromOrigin:toDestinations:transportType:timepoint:includeDistance:commonOptions:automobileOptions:walkingOptions:transitOptions:cyclingOptions:auditToken:handler:callbackQueue:;
@end
