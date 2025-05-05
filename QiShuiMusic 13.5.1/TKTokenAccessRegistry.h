@interface TKTokenAccessRegistry : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessDB:userPrompt:;
- (BOOL)evaluateRequest:error:;
- (BOOL)_shouldAutomaticallyAllowRequest:;
- (BOOL)_platformAllowsAllRequests;
- (long long)_promptUserToEvaluateRequest:error:;
- (long long)_fetchAccessForRequest:;
- (void)_storeAccess:forRequest:;
- (BOOL)_isPersistenceEnabled;
- (void)setUserPrompt:;
- (void)setAccessDB:;
@end
