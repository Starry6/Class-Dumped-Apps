@interface BKSHIDEventDeliveryPolicyObserver : NSObject
@property (nonatomic) BKSHIDEventDisplay display;
@property (nonatomic) BKSHIDEventDeferringEnvironment deferringEnvironment;
@property (nonatomic) BKSHIDEventDeferringToken deferringToken;
@property (nonatomic) BOOL canReceiveEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deferringEnvironment;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void)setDisplay:;
- (void)deferringResolutionsChanged;
- (id)display;
- (void)setDeferringEnvironment:;
- (id)debugDescription;
- (id)_initWithObserver:;
- (void)setDeferringToken:;
- (BOOL)canReceiveEvents;
- (void).cxx_destruct;
- (BOOL)_lock_canReceiveEvents;
- (id)deferringToken;
- (id)description;
- (id)_lock_updateStateWithBlock:;
@end
