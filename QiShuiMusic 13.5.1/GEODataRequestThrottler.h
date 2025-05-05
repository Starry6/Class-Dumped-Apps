@interface GEODataRequestThrottler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)valueChangedForGEOConfigKey:;
- (void)_reset;
- (id)init;
- (void)_updateSavedState:;
- (void)dealloc;
- (void)getInfoForRequest:client:timeUntilNextReset:availableRequestCount:;
- (void)_withThrottlersForKey:auditToken:do:;
- (void).cxx_destruct;
- (BOOL)allowRequest:forClient:throttlerToken:error:;
- (void)reset;
- (id)description;
- (id)_init;
- (void)_pruneThrottlers;
- (id)throttlerForKeyPath:;
- (void)pruneThrottlers;
+ (id)sharedThrottler;
@end
