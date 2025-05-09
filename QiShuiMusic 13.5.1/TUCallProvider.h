@interface TUCallProvider : NSObject
@property (nonatomic) NSObject<OS_tcc_identity> assumedIdentity;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSSet supportedHandleTypes;
@property (nonatomic) NSArray emergencyHandles;
@property (nonatomic) NSArray emergencyLabeledHandles;
@property (nonatomic) NSArray handoffIdentifiers;
@property (nonatomic) NSOrderedSet prioritizedSenderIdentities;
@property (nonatomic) NSURL ringtoneSoundURL;
@property (nonatomic) TUSandboxExtendedURL sandboxExtendedRingtoneSoundURL;
@property (nonatomic) NSURL originalRingtoneSoundURL;
@property (nonatomic) NSData iconTemplateImageData;
@property (nonatomic) NSString localizedName;
@property (nonatomic) Q maximumCallGroups;
@property (nonatomic) Q maximumCallsPerCallGroup;
@property (nonatomic) BOOL supportsAudioOnly;
@property (nonatomic) BOOL supportsAudioAndVideo;
@property (nonatomic) BOOL supportsEmergency;
@property (nonatomic) BOOL supportsVoicemail;
@property (nonatomic) BOOL supportsRecents;
@property (nonatomic) BOOL supportsCurrentPlatform;
@property (nonatomic) BOOL supportsRinging;
@property (nonatomic) I audioSessionID;
@property (nonatomic) q sandboxExtensionHandle;
@property (nonatomic) BOOL telephonyProvider;
@property (nonatomic) BOOL faceTimeProvider;
@property (nonatomic) BOOL superboxProvider;
@property (nonatomic) TUCallProvider base;
- (unsigned int)audioSessionID;
- (void)setLocalizedName:;
- (id)init;
- (id)bundleIdentifier;
- (id)bundleURL;
- (void)setBundleURL:;
- (id)identifier;
- (id)localizedName;
- (id)assumedIdentity;
- (id)base;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setSandboxExtensionHandle:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setAudioSessionID:;
- (long long)sandboxExtensionHandle;
- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsCurrentPlatform;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)prioritizedSenderIdentities;
- (id)senderIdentityForAccountUUID:;
- (id)emergencyHandles;
- (id)emergencyLabeledHandles;
- (id)handoffIdentifiers;
- (id)sandboxExtendedRingtoneSoundURL;
- (id)originalRingtoneSoundURL;
- (id)iconTemplateImageData;
- (unsigned long long)maximumCallGroups;
- (unsigned long long)maximumCallsPerCallGroup;
- (BOOL)supportsAudioOnly;
- (BOOL)supportsAudioAndVideo;
- (BOOL)supportsEmergency;
- (BOOL)supportsVoicemail;
- (BOOL)supportsRecents;
- (BOOL)supportsRinging;
- (id)supportedHandleTypes;
- (BOOL)supportsHandleType:;
- (BOOL)isTelephonyProvider;
- (BOOL)isFaceTimeProvider;
- (BOOL)isSuperboxProvider;
- (BOOL)isTinCanProvider;
- (BOOL)isSystemProvider;
- (BOOL)hasRestrictionsInRetailEnvironment;
- (id)senderIdentityForUUID:;
- (void)setSupportsCurrentPlatform:;
- (id)senderIdentityForHandle:;
- (id)displayAppBundleIdentifier;
- (id)inCallUIBundleIdentifier;
- (id)ringtoneSoundURL;
- (void)setRingtoneSoundURL:;
- (void)setSenderIdentities:;
- (id)senderIdentities;
- (BOOL)isEqualToCallProvider:;
- (void)setSupportsAudioOnly:;
- (void)setSupportsAudioAndVideo:;
- (void)setSupportsEmergency:;
- (void)setSupportsVoicemail:;
- (void)setSupportedHandleTypes:;
- (void)setEmergencyHandles:;
- (void)setEmergencyLabeledHandles:;
- (void)setHandoffIdentifiers:;
- (void)setPrioritizedSenderIdentities:;
- (void)setSandboxExtendedRingtoneSoundURL:;
- (void)setOriginalRingtoneSoundURL:;
- (void)setIconTemplateImageData:;
- (void)setMaximumCallGroups:;
- (void)setMaximumCallsPerCallGroup:;
- (void)setSupportsRecents:;
- (void)setSupportsRinging:;
+ (BOOL)supportsSecureCoding;
@end
