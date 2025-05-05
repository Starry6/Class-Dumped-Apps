@interface INExtensionContextIntentResponseObserver : NSObject
@property (nonatomic) NSMapTable remoteObservers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)getRideStatusResponseDidUpdate:;
- (void)getCarPowerLevelStatusResponseDidUpdate:;
- (void)setObserver:forConnection:;
- (void)_intentResponseDidUpdate:;
- (id)remoteObservers;
@end
