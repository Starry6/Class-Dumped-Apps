@interface ICURLResponseHandler : NSObject
- (void)processInitialResponse:toRequest:withCompletionHandler:;
- (void)processCompletedResponse:toRequest:withCompletionHandler:;
@end
