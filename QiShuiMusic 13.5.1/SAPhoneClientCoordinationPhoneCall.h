@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand
@property (nonatomic) SAPersonAttribute callRecipient;
@property (nonatomic) BOOL emergencyCall;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)emergencyCall;
- (id)callRecipient;
- (void)setCallRecipient:;
- (void)setEmergencyCall:;
+ (id)clientCoordinationPhoneCall;
+ (id)clientCoordinationPhoneCallWithDictionary:context:;
@end
