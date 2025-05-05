@interface ICURLSessionManager : NSObject
- (id)init;
- (id)sessionWithIdentifier:;
- (id)sessionWithIdentifier:configuration:;
- (void)addSession:withIdentifier:;
- (id)sessionWithQualityOfService:;
- (void).cxx_destruct;
- (id)_defaultSessionIdentifierWithQualityOfService:maxConcurrentRequests:;
- (id)sessionWithIdentifier:creationBlock:;
- (id)_defaultSessionWithQualityOfService:maxConcurrentRequests:;
- (void)removeSessionWithIdentifier:;
+ (id)highPrioritySession;
+ (id)unlimitedHighPrioritySession;
+ (id)defaultSession;
+ (id)sharedSessionManager;
@end
