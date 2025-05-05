@interface GEOSpatialLookupRequester : GEOServiceRequester
- (void)cancelRequest:;
- (id)_validateResponse:;
- (void)startWithRequest:traits:timeout:auditToken:completionHandler:;
+ (id)sharedInstance;
@end
