@interface SAWristDetectionStatusClientState : SAAceClientState
@property (nonatomic) BOOL wristDetected;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)wristDetected;
- (void)setWristDetected:;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)wristDetectionStatusClientState;
+ (id)wristDetectionStatusClientStateWithDictionary:context:;
@end
