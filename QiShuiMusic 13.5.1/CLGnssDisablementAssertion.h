@interface CLGnssDisablementAssertion : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithRegistrationMessageName:messagePayload:callbackQueue:completionHandler:;
+ (id)newAssertionForBundleIdentifier:withReason:callbackQueue:completionHandler:;
+ (id)newAssertionForBundle:withReason:callbackQueue:completionHandler:;
@end
