@interface MNNavdStateUpdater : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isNavigatingWithETA;
- (void)stateManager:didChangeFromState:toState:;
- (id)initPrivate;
- (BOOL)isNavigatingOrPredictingDestination;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (void)registerObserver:;
+ (id)sharedUpdater;
@end
