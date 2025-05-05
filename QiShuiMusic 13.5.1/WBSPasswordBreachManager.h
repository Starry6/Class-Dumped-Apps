@interface WBSPasswordBreachManager : NSObject
- (void)clearRecentlyBreachedResultRecords;
- (BOOL)_canPerformSessionIgnoringMinimumDelay:;
- (void)_showActiveWarningsIfNecessaryWithInitialBagFillState:completionHandler:;
- (id)_checker;
- (id)initWithContext:credentialSource:;
- (void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:;
- (void)performNextSessionLookupIgnoringMinimumDelay:completionHandler:;
- (void)addResultRecords:;
- (void).cxx_destruct;
- (void)clearAllRecordsWithCompletionHandler:;
- (void)_completeSessionWithResults:completionHandler:;
- (id)resultRecordsForQueries:;
- (id)recentlyBreachedSavedAccounts;
- (id)recentlyBreachedResultRecords;
+ (void)_getStandardContextWithCompletionHandler:;
+ (id)testableManagerWithTestCredentialSource:store:configuration:;
+ (void)getSharedManagerWithCompletionHandler:;
+ (void)setPasswordBreachDetectionOn:;
+ (BOOL)isPasswordBreachDetectionOn;
@end
