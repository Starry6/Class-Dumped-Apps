@interface CBABModuleiOS : CBModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)removeHIDServiceClient:;
- (void)handleNotificationForKey:withProperty:;
- (BOOL)addHIDServiceClient:;
- (id)copyPropertyInternalForKey:;
- (BOOL)handleAODStateUpdate:transitionTime:context:;
- (id)copyIdentifiers;
- (BOOL)handleHIDEvent:from:;
- (void)dealloc;
- (void)start;
- (void)sendNotificationForKey:withValue:;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (id)initWithDisplayModule:andQueue:;
- (BOOL)shouldMitigateHarmony:;
@end
