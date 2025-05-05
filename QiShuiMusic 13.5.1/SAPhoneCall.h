@interface SAPhoneCall : SADomainCommand
@property (nonatomic) SAPersonAttribute callRecipient;
@property (nonatomic) NSNumber emergencyCall;
@property (nonatomic) BOOL faceTime;
@property (nonatomic) BOOL faceTimeAudio;
@property (nonatomic) BOOL handsFreeCall;
@property (nonatomic) BOOL speakerphoneCall;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)emergencyCall;
- (id)callRecipient;
- (void)setCallRecipient:;
- (void)setEmergencyCall:;
- (BOOL)faceTime;
- (void)setFaceTime:;
- (BOOL)faceTimeAudio;
- (void)setFaceTimeAudio:;
- (BOOL)handsFreeCall;
- (void)setHandsFreeCall:;
- (BOOL)speakerphoneCall;
- (void)setSpeakerphoneCall:;
+ (id)call;
+ (id)callWithDictionary:context:;
@end
