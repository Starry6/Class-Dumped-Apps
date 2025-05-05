@interface VCMediaNegotiatorResultsFaceTimeSettings : NSObject
@property (nonatomic) BOOL SIPDisabled;
@property (nonatomic) BOOL secureMessagingRequired;
@property (nonatomic) BOOL remoteFaceTimeSwitchesAvailable;
@property (nonatomic) I faceTimeSwitches;
@property (nonatomic) BOOL oneToOneModeSupported;
@property (nonatomic) C mediaControlInfoFECFeedbackVersion;
@property (nonatomic) C remoteLinkProbingCapabilityVersion;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (void)setMediaControlInfoFECFeedbackVersion:;
- (BOOL)SIPDisabled;
- (void)setSIPDisabled:;
- (BOOL)secureMessagingRequired;
- (void)setSecureMessagingRequired:;
- (unsigned int)faceTimeSwitches;
- (void)setFaceTimeSwitches:;
- (BOOL)oneToOneModeSupported;
- (void)setOneToOneModeSupported:;
- (unsigned char)remoteLinkProbingCapabilityVersion;
- (void)setRemoteLinkProbingCapabilityVersion:;
- (BOOL)remoteFaceTimeSwitchesAvailable;
- (void)setRemoteFaceTimeSwitchesAvailable:;
@end
