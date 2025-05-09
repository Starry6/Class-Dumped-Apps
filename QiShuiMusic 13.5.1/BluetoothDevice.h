@interface BluetoothDevice : NSObject
- (id)productName;
- (int)batteryLevel;
- (void)setSyncSettings:;
- (BOOL)setSingleClickMode:;
- (BOOL)connected;
- (id)syncSettings;
- (unsigned int)doubleTapCapability;
- (BOOL)setListeningMode:;
- (void)dealloc;
- (int)crownRotationDirection;
- (BOOL)setCrownRotationDirection:;
- (unsigned int)listeningMode;
- (unsigned int)micMode;
- (int)doubleClickMode;
- (BOOL)isServiceSupported:;
- (BOOL)setListeningModeConfigs:;
- (unsigned int)doubleTapAction;
- (int)singleClickMode;
- (unsigned int)productId;
- (void)setDevice:;
- (void)disconnect;
- (BOOL)setDoubleClickMode:;
- (BOOL)isAppleAudioDevice;
- (unsigned int)vendorId;
- (BOOL)setIsHidden:;
- (int)type;
- (BOOL)setUserName:;
- (long long)compare:;
- (unsigned int)listeningModeConfigs;
- (void)connect;
- (id)description;
- (id)address;
- (id)name;
- (BOOL)setDoubleTapAction:;
- (BOOL)setMicMode:;
- (BOOL)paired;
- (id)syncGroups;
- (unsigned long long)connectedServices;
- (id)device;
- (void)setPIN:;
- (id)copyWithZone:;
- (unsigned int)getAACPCapabilityInteger:;
- (BOOL)magicPaired;
- (void)unpair;
- (BOOL)featureCapability:;
- (unsigned char)spatialAudioMode;
- (BOOL)setSpatialAudioMode:;
- (BOOL)spatialAudioAllowed;
- (BOOL)setSpatialAudioAllowed:;
- (BOOL)setSpatialAudioConfig:spatialMode:headTracking:;
- (BOOL)spatialAudioConfig:spatialMode:headTracking:;
- (int)getStereoHFPSupport;
- (BOOL)isAccessory;
- (id)accessoryInfo;
- (BOOL)inEarDetectEnabled;
- (BOOL)inEarStatusPrimary:secondary:;
- (BOOL)supportsBatteryLevel;
- (id)getServiceSetting:key:;
- (int)getHexDeviceAddress:;
- (void)setServiceSetting:key:value:;
- (BOOL)isTemporaryPaired;
- (BOOL)getDeviceSoundProfileAllowed;
- (int)getDeviceColor:;
- (BOOL)setClickHoldModes:;
- (id)getCallManagementConfig;
- (BOOL)setClickHoldMode:rightMode:;
- (BOOL)smartRouteSupport;
- (int)getBehaviorForHIDDevice;
- (unsigned int)doubleTapActionEx:rightAction:;
- (BOOL)isGenuineAirPods;
- (BOOL)setCallConfig:;
- (BOOL)getAACPCapabilityBit:;
- (int)getUserSelectedDeviceType;
- (void)setSyncGroup:enabled:;
- (unsigned char)getSpatialAudioPlatformSupport;
- (unsigned int)SendSetupCommand:;
- (BOOL)setDoubleTapActionEx:rightAction:;
- (BOOL)batteryStatus:;
- (int)accessorySettingFeatureBitMask;
- (void)setDeviceSoundProfileAllowed:;
- (int)autoAnswerMode;
- (BOOL)setAutoAnswerMode:;
- (unsigned int)clickHoldModes:;
- (unsigned int)clickHoldMode:rightAction:;
- (int)getLowSecurityStatus;
- (BOOL)cloudPaired;
- (BOOL)setUserSelectedDeviceType:;
- (BOOL)setInEarDetectEnabled:;
- (BOOL)setSmartRouteMode:;
- (unsigned char)smartRouteMode;
- (id)initWithDevice:address:;
- (void)_clearName;
- (BOOL)_isNameCached;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (id)scoUID;
- (id)aclUID;
- (unsigned long long)connectedServicesCount;
- (BOOL)spatialAudioActive;
- (BOOL)headTrackingAvailable;
- (unsigned int)chimeVolume;
- (BOOL)setChimeVolume:;
- (BOOL)pairedDeviceNameUpdated;
- (id)getAACPCapabilityBits;
- (void)connectWithServices:;
- (void)acceptSSP:;
- (void)startVoiceCommand;
- (void)endVoiceCommand;
- (BOOL)supportsHS;
- (BOOL)isProController;
- (void)setConnectingServicemask:;
- (unsigned int)getConnectingServiceMask;
- (BOOL)getDeviceSoundProfileSupport;
- (id)gyroInformation;
@end
