@interface GEOTransitUpdateRequester : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)_finishRequest:;
- (void)startTransitRouteUpdateRequest:auditToken:throttleToken:queue:networkActivity:completion:;
- (void)cancelTransitRouteUpdateRequest:;
+ (id)sharedRequester;
@end
