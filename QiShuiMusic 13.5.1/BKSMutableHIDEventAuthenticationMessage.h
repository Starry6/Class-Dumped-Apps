@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage
@property (nonatomic) q versionedPID;
@property (nonatomic) I eventType;
@property (nonatomic) I targetContextID;
@property (nonatomic) I targetSlotID;
@property (nonatomic) BKSHIDEventHitTestLayerInformation hitTestInformationFromStartEvent;
@property (nonatomic) BKSHIDEventHitTestLayerInformation hitTestInformationFromEndEvent;
@property (nonatomic) Q originIdentifier;
@property (nonatomic) Q context;
@property (nonatomic) q secureNameStatus;
@property (nonatomic) BOOL registrantEntitled;
- (void)setVersionedPID:;
- (void)setEventType:;
- (void)setContext:;
- (id)copyWithZone:;
- (void)setDestinationAuditToken:;
- (void)setSecureNameStatus:;
- (void)setTargetSlotID:;
- (void)setTargetContextID:;
- (void)setHitTestInformationFromStartEvent:;
- (void)setHitTestInformationFromEndEvent:;
- (void)setOriginIdentifier:;
- (void)setRegistrantEntitled:;
@end
