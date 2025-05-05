@interface DNDModeSelectionService : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeListener:;
- (id)allModesWithError:;
- (void)remoteService:didReceiveUpdatedModes:;
- (id)modeConfigurationForModeIdentifier:error:;
- (void)remoteService:didReceiveUpdatedAvailableModes:;
- (BOOL)_queue_registerForUpdatesIfRequired;
- (BOOL)activateModeWithDetails:error:;
- (id)activeModeAssertionWithError:;
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (void)remoteService:didReceiveUpdatedActiveModeAssertion:stateUpdate:;
- (BOOL)invalidateModeAssertionWithUUID:error:;
- (id)promotedPlaceholderWithModeIdentifier:error:;
- (BOOL)promotePlaceholderWithModeIdentifier:error:;
- (id)availableModesWithError:;
- (id)clientIdentifier;
- (void)addListener:withCompletionHandler:;
+ (id)serviceForClientIdentifier:;
@end
