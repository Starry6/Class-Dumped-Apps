@interface AFBluetoothDeviceInfo : NSObject
@property (nonatomic) NSString address;
@property (nonatomic) NSUUID deviceUID;
@property (nonatomic) I vendorID;
@property (nonatomic) I productID;
@property (nonatomic) BOOL isAdvancedAppleAudioDevice;
@property (nonatomic) BOOL supportsInEarDetection;
@property (nonatomic) BOOL supportsVoiceTrigger;
@property (nonatomic) BOOL supportsSpokenNotification;
@property (nonatomic) BOOL supportsListeningModeANC;
@property (nonatomic) BOOL supportsListeningModeTransparency;
@property (nonatomic) BOOL supportsAnnounceCall;
- (unsigned int)productID;
- (unsigned int)vendorID;
- (id)deviceUID;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (BOOL)supportsVoiceTrigger;
- (BOOL)supportsSpokenNotification;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAddress:deviceUID:vendorID:productID:isAdvancedAppleAudioDevice:supportsInEarDetection:supportsVoiceTrigger:supportsSpokenNotification:supportsListeningModeANC:supportsListeningModeTransparency:supportsAnnounceCall:;
- (BOOL)isAdvancedAppleAudioDevice;
- (BOOL)supportsInEarDetection;
- (BOOL)supportsListeningModeANC;
- (BOOL)supportsListeningModeTransparency;
- (BOOL)supportsAnnounceCall;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
