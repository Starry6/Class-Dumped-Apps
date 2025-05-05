@interface CLBBTimeFreqTransferCallbackAssertion : NSObject
- (void)dealloc;
- (void)invalidate;
- (id)initWithRegistrationMessageName:messageDictionary:dispatchQueue:codeBlock:;
+ (id)newAssertionForBundleIdentifier:withReason:withCallbackQueue:andBlock:;
+ (id)newAssertionForBundle:withReason:withCallbackQueue:andBlock:;
@end
