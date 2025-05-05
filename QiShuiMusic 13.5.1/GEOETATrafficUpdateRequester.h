@interface GEOETATrafficUpdateRequester : NSObject
- (void)cancelRequest:;
- (void)sendETATrafficUpdateRequest:auditToken:throttleToken:finishedHandler:;
- (void)sendConditionalETATrafficUpdateRequest:timeWindowDuration:auditToken:throttleToken:willSendRequestHandler:finishedHandler:;
@end
