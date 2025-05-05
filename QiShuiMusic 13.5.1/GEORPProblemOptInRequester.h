@interface GEORPProblemOptInRequester : GEOServiceRequester
- (void)cancelRequest:;
- (id)_validateResponse:;
- (void)startWithRequest:traits:completionHandler:;
+ (id)sharedInstance;
@end
