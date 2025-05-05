@interface GEOPlaceDataRequester : GEOServiceRequester
- (void)cancelRequest:;
- (void)startWithRequest:traits:timeout:auditToken:throttleToken:completionHandler:;
- (id)_validateResponse:;
+ (id)sharedInstance;
@end
