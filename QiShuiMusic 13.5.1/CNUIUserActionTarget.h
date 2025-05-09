@interface CNUIUserActionTarget : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString teamIdentifier;
@property (nonatomic) NSString actionType;
@property (nonatomic) <CNTUCallProvider> callProvider;
- (id)init;
- (id)bundleIdentifier;
- (void)setName:;
- (id)actionType;
- (id)teamIdentifier;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)setTeamIdentifier:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)actionsForContact:discoveringEnvironment:;
- (id)callProvider;
- (void)setCallProvider:;
- (id)actionsForEmailAddresses:contact:discoveringEnvironment:;
- (id)actionsForPhoneNumbers:contact:discoveringEnvironment:;
- (id)actionsForSocialProfiles:contact:discoveringEnvironment:;
- (id)actionsForInstantMessageAddresses:contact:discoveringEnvironment:;
- (id)initWithName:bundleIdentifier:teamIdentifier:;
- (id)actionsForPostalAddresses:contact:discoveringEnvironment:;
+ (id)targetForDirections;
+ (id)targetForTextWithMessages;
+ (id)targetForVoiceWithTelephony;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVideoWithSkype;
+ (id)targetForTextWithSkype;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForVoiceWithCallProvider:;
+ (id)targetForStartAudioCallIntentWithAppProxy:;
+ (id)targetForVideoWithCallProvider:;
+ (id)targetForStartVideoCallIntentWithAppProxy:;
+ (id)targetForSendMessageIntentWithAppProxy:;
+ (id)descriptorForRequiredKeysForActionDiscovering;
@end
