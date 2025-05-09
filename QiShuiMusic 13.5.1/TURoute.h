@interface TURoute : NSObject
@property (nonatomic) BOOL A2DPRoute;
@property (nonatomic) BOOL airTunes;
@property (nonatomic) BOOL carAudio;
@property (nonatomic) BOOL currentlyPicked;
@property (nonatomic) BOOL bluetooth;
@property (nonatomic) q bluetoothEndpointType;
@property (nonatomic) BOOL bluetoothLE;
@property (nonatomic) BOOL bluetoothManaged;
@property (nonatomic) BOOL defaultRoute;
@property (nonatomic) q deviceType;
@property (nonatomic) BOOL guest;
@property (nonatomic) NSArray identifiersOfOtherConnectedDevices;
@property (nonatomic) BOOL inEarDetectionEnabled;
@property (nonatomic) BOOL inEarDetectionSupported;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL preferred;
@property (nonatomic) BOOL preferredAndActive;
@property (nonatomic) BOOL receiver;
@property (nonatomic) BOOL speaker;
@property (nonatomic) BOOL supportsHighQualityVoiceWithMedia;
@property (nonatomic) BOOL supportsRelay;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) BOOL wiredHeadphones;
@property (nonatomic) BOOL wiredHeadset;
@property (nonatomic) BOOL wirelessHeadset;
@property (nonatomic) BOOL partnerRouteRoutable;
@property (nonatomic) BOOL siblingRoutePresent;
@property (nonatomic) BOOL supportsSharePlay;
@property (nonatomic) BOOL carKitRoute;
@property (nonatomic) BOOL homePodFamily;
@property (nonatomic) BOOL isAirPodsRoute;
@property (nonatomic) BOOL inEarDetected;
@property (nonatomic) BOOL supportsPreferredAndActive;
@property (nonatomic) BOOL tipiParticipant;
@property (nonatomic) BOOL triangleParticipant;
- (long long)deviceType;
- (BOOL)isGuest;
- (void)setSupportsSharePlay:;
- (void)setDeviceType:;
- (void)setUniqueIdentifier:;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isBluetoothManaged;
- (BOOL)isTriangleParticipant;
- (void)setName:;
- (id)uniqueIdentifier;
- (void)setInEarDetectionEnabled:;
- (void)setPreferred:;
- (void)setBluetoothEndpointType:;
- (void)setPreferredAndActive:;
- (void)setCurrentlyPicked:;
- (BOOL)isBluetoothLE;
- (void)setSpeaker:;
- (BOOL)isAirPodsRoute;
- (BOOL)isWiredHeadphones;
- (BOOL)supportsRelay;
- (BOOL)isA2DPRoute;
- (void)setBluetoothLE:;
- (BOOL)supportsSharePlay;
- (BOOL)isPreferred;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setGuest:;
- (BOOL)isDefaultRoute;
- (BOOL)isCurrentlyPicked;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isAirTunes;
- (void)setDefaultRoute:;
- (void)setAirTunes:;
- (BOOL)isReceiver;
- (BOOL)isInEarDetected;
- (BOOL)isInEarDetectionSupported;
- (void)encodeWithCoder:;
- (void)setSupportsRelay:;
- (void)setBluetoothManaged:;
- (void)setWiredHeadphones:;
- (BOOL)isEqualToRoute:;
- (long long)bluetoothEndpointType;
- (id)identifiersOfOtherConnectedDevices;
- (void)setSupportsHighQualityVoiceWithMedia:;
- (id)initWithUniqueIdentifier:name:;
- (void)setWiredHeadset:;
- (void).cxx_destruct;
- (void)setIdentifiersOfOtherConnectedDevices:;
- (void)setInEarDetectionSupported:;
- (void)setPartnerRouteRoutable:;
- (BOOL)isTipiParticipant;
- (void)setBluetooth:;
- (void)setWirelessHeadset:;
- (id)description;
- (void)setReceiver:;
- (void)setCarAudio:;
- (void)setSiblingRoutePresent:;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isSpeaker;
- (BOOL)isSiblingRoutePresent;
- (id)name;
- (BOOL)supportsPreferredAndActive;
- (id)mutableCopyWithZone:;
- (BOOL)isCarAudio;
- (BOOL)isCarKitRoute;
- (void)setA2DPRoute:;
- (BOOL)isBluetooth;
- (BOOL)isWirelessHeadset;
- (BOOL)isPreferredAndActive;
- (id)initWithRoute:;
- (BOOL)isEqual:;
- (id)customDescription;
- (BOOL)isHomePodFamily;
- (BOOL)isWiredHeadset;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForInEarAudioRoute;
+ (id)predicateForPreferredRoute;
@end
