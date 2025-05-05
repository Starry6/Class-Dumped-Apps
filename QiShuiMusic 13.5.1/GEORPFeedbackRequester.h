@interface GEORPFeedbackRequester : GEOServiceRequester
- (void)cancelRequest:;
- (id)_validateResponse:;
- (void)startWithRequest:traits:completionHandler:;
- (id)_requestConfigForRequest:;
+ (id)sharedInstance;
@end
