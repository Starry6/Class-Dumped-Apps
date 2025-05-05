@interface CMPocketStateManager : NSObject
@property (nonatomic) <CMPocketStateDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)_disableDispatcher;
- (void)onNotification:;
- (void)setDelegate:;
- (void)queryStateOntoQueue:andMonitorFor:withTimeout:andHandler:;
- (void)_prepareDispatcher;
- (id)delegate;
- (void).cxx_destruct;
- (void)onPocketStateUpdated:;
- (void)queryStateOntoQueue:withTimeout:andHandler:;
- (long long)translateInternalState:;
- (void)addToAggdScalarWithName:andScalar:;
- (id)externalStateToString:;
- (id).cxx_construct;
+ (BOOL)isPocketStateAvailable;
@end
