@interface CKScheduler : NSObject
@property (nonatomic) NSNumber fakeDeviceCount;
@property (nonatomic) NSMutableDictionary xpcActivitiesByCKActivityIdentifier;
- (void)getSuggestedXPCActivityCriteriaForActivity:completionHandler:;
- (id)init;
- (long long)currentPriorityForActivityIdentifier:;
- (void)registerActivityIdentifier:replaceExistingHandler:handler:;
- (void)submitActivity:;
- (void)unregisterHandlerForActivityIdentifier:;
- (void)setXpcActivitiesByCKActivityIdentifier:;
- (BOOL)hasPendingActivityWithActivityIdentifier:;
- (void)unregisterActivityIdentifier:;
- (void)setFakeDeviceCount:;
- (id)fakeDeviceCount;
- (BOOL)isXPCActivityPending:;
- (void).cxx_destruct;
- (void)performAsyncOnQueue:;
- (void)cancelActivityWithIdentifier:;
- (id)_init;
- (void)registerActivityIdentifier:handler:;
- (id)xpcActivitiesByCKActivityIdentifier;
- (id)activityForActivityIdentifier:;
- (id)xpcActivityForActivityWithIdentifier:;
+ (id)activityFromXPCActivity:;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:;
+ (id)sharedScheduler;
+ (id)identifierWithImmediateInvocationForIdentifier:;
@end
