@interface CXProviderConfiguration : NSObject
@property (nonatomic) NSString localizedName;
@property (nonatomic) I audioSessionID;
@property (nonatomic) NSArray emergencyHandles;
@property (nonatomic) NSArray emergencyLabeledHandles;
@property (nonatomic) NSArray handoffIdentifiers;
@property (nonatomic) NSSet senderIdentities;
@property (nonatomic) NSOrderedSet prioritizedSenderIdentities;
@property (nonatomic) CXSandboxExtendedURL ringtoneSoundURL;
@property (nonatomic) BOOL supportsAudioOnly;
@property (nonatomic) BOOL supportsEmergency;
@property (nonatomic) BOOL supportsVoicemail;
@property (nonatomic) BOOL supportsCurrentPlatform;
@property (nonatomic) BOOL supportsRinging;
@property (nonatomic) NSString ringtoneSound;
@property (nonatomic) NSData iconTemplateImageData;
@property (nonatomic) Q maximumCallGroups;
@property (nonatomic) Q maximumCallsPerCallGroup;
@property (nonatomic) BOOL includesCallsInRecents;
@property (nonatomic) BOOL supportsVideo;
@property (nonatomic) NSSet supportedHandleTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)audioSessionID;
- (void)setLocalizedName:;
- (id)init;
- (BOOL)supportsVideo;
- (id)localizedName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqualToConfiguration:;
- (void)setAudioSessionID:;
- (id)sanitizedCopy;
- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsCurrentPlatform;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)prioritizedSenderIdentities;
- (id)sanitizedCopyWithZone:;
- (id)emergencyHandles;
- (id)emergencyLabeledHandles;
- (id)handoffIdentifiers;
- (id)iconTemplateImageData;
- (unsigned long long)maximumCallGroups;
- (unsigned long long)maximumCallsPerCallGroup;
- (BOOL)supportsAudioOnly;
- (BOOL)supportsEmergency;
- (BOOL)supportsVoicemail;
- (BOOL)supportsRinging;
- (id)supportedHandleTypes;
- (void)setSupportsCurrentPlatform:;
- (id)ringtoneSoundURL;
- (void)setRingtoneSoundURL:;
- (void)setSenderIdentities:;
- (id)senderIdentities;
- (void)setSupportsAudioOnly:;
- (void)setSupportsEmergency:;
- (void)setSupportsVoicemail:;
- (void)setSupportedHandleTypes:;
- (void)setEmergencyHandles:;
- (void)setEmergencyLabeledHandles:;
- (void)setHandoffIdentifiers:;
- (void)setPrioritizedSenderIdentities:;
- (void)setIconTemplateImageData:;
- (void)setMaximumCallGroups:;
- (void)setMaximumCallsPerCallGroup:;
- (void)setSupportsRinging:;
- (id)initWithLocalizedName:;
- (void)updateSanitizedCopy:withZone:;
- (void)updateCopy:withZone:;
- (BOOL)includesCallsInRecents;
- (id)ringtoneSound;
- (void)setRingtoneSound:;
- (void)setIncludesCallsInRecents:;
- (void)setSupportsVideo:;
+ (BOOL)supportsSecureCoding;
@end
