@interface CKContextClient : NSObject
@property (nonatomic) Q defaultRequestType;
@property (nonatomic) NSSet capabilities;
- (void)retrieveCapabilitiesWithReply:;
- (id)init;
- (void)registerConfigurationUpdateHandler:;
- (void)updateCachedCapabilitiesWithReply:;
- (id)capabilities;
- (id)createRequest;
- (void)ensureFullyInitialized;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:;
- (void)workWithServiceSemaphore:;
- (id)initWithDefaultRequestType:;
- (id)indexVersionId;
- (void).cxx_destruct;
- (void)didReceiveCKContextServiceUpdateNotification;
- (id)newRequest;
- (void)groupResponses:withReply:;
- (void)capabilitiesWithReply:;
- (unsigned long long)defaultRequestType;
- (id)retrieveCapabilites;
- (void)ancestorsForTopics:withReply:;
+ (id)new;
+ (double)timeIntervalBetweenMachTime:andMachTime:;
+ (void)_observeApplicationStateNotifications;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithPreferredRequestType:;
+ (id)clientWithDefaultRequestType:;
@end
