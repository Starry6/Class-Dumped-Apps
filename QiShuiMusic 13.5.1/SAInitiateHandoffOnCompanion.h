@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand
@property (nonatomic) <SAHandoffPayload> handoffPayload;
@property (nonatomic) NSNumber isSiriXRequest;
@property (nonatomic) NSString lockScreenText;
@property (nonatomic) NSString lockScreenTextDialogIdentifier;
@property (nonatomic) NSString notificationText;
@property (nonatomic) NSString notificationTextDialogIdentifier;
@property (nonatomic) SARemoteDevice targetDevice;
- (id)targetDevice;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setTargetDevice:;
- (id)isSiriXRequest;
- (void)setIsSiriXRequest:;
- (void)setNotificationText:;
- (id)notificationText;
- (id)handoffPayload;
- (void)setHandoffPayload:;
- (id)lockScreenText;
- (void)setLockScreenText:;
- (id)lockScreenTextDialogIdentifier;
- (void)setLockScreenTextDialogIdentifier:;
- (id)notificationTextDialogIdentifier;
- (void)setNotificationTextDialogIdentifier:;
+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:context:;
@end
