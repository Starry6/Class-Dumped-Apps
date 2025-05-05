@interface SBSRemoteAlertHandle : NSObject
@property (nonatomic) NSString handleID;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL valid;
- (void)removeObserver:;
- (void)addObserver:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (void)invalidate;
- (BOOL)isActive;
- (void)registerObserver:;
- (void)activateWithContext:;
- (id)handleID;
- (id)_initWithHandleID:handleClient:;
- (void)activateWithOptions:;
- (void)_didActivate;
- (void)_didDeactivate;
- (void)_receivedInvalidationWithError:;
- (void)_invalidateWithError:shouldInvalidateHandleClient:;
+ (id)newHandleWithDefinition:configurationContext:;
+ (id)lookupHandlesForDefinition:;
+ (id)lookupHandlesForDefinition:creatingIfNone:;
+ (id)lookupHandlesForDefinition:creatingIfNone:configurationContext:;
+ (id)defaultHandleClient;
+ (void)setDefaultHandleClient:;
+ (id)lookupHandlesForConfiguration:creatingIfNone:;
+ (id)handleWithConfiguration:;
@end
