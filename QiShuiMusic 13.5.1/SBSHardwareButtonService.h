@interface SBSHardwareButtonService : SBSAbstractSystemService
@property (nonatomic) BSMutableIntegerMap consumersPerKind;
@property (nonatomic) BSMutableIntegerMap buttonConfigurationsPerKind;
@property (nonatomic) BSMutableIntegerMap requestHIDAssertionsPerKind;
- (void)setHapticType:forButtonKind:;
- (void)fetchHapticTypeForButtonKind:completion:;
- (long long)toggleStateForButtonKind:;
- (void).cxx_destruct;
- (id)description;
- (id)deferHIDEventsForButtonKind:toToken:;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:completion:;
- (void)_setApplicationClientEventMask:buttonKind:priority:;
- (void)_resetEventMaskForButtonKind:;
- (id)_viableConsumerForButtonKind:event:priority:;
- (void)_addEventConsumerInfo:;
- (void)_mainQueue_handleButtonPressMessage:forButtonKind:priority:;
- (id)beginConsumingPressesForButtonKind:eventConsumer:priority:;
- (void)handleButtonPressMessage:forButtonKind:priority:;
- (void)consumerInfoWillInvalidate:;
- (id)consumersPerKind;
- (void)setConsumersPerKind:;
- (id)buttonConfigurationsPerKind;
- (void)setButtonConfigurationsPerKind:;
- (id)requestHIDAssertionsPerKind;
- (void)setRequestHIDAssertionsPerKind:;
+ (id)sharedInstance;
@end
