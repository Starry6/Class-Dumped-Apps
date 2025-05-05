@interface DNDModeAssertionService : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activeModeAssertionWithError:;
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)remoteService:didChangeActiveModeAssertion:invalidation:;
- (id)takeModeAssertionWithDetails:error:;
- (id)invalidateActiveModeAssertionWithError:;
- (id)invalidateActiveModeAssertionWithInvalidationDetails:reasonOverride:error:;
- (id)latestModeAssertionInvalidationWithError:;
- (BOOL)invalidateAllActiveModeAssertionsWithError:;
- (id)allModeAssertionsWithError:;
- (void)addAssertionUpdateListener:withCompletionHandler:;
- (void)removeAssertionUpdateListener:;
- (void)_handleChangeActiveModeAssertion:invalidation:;
- (void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:;
- (BOOL)addAssertionUpdateListener:error:;
- (BOOL)removeAssertionUpdateListener:error:;
+ (id)serviceForClientIdentifier:;
@end
