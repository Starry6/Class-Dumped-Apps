@interface IDSDevice : NSObject
@property (nonatomic) MRDeviceInfo mr_deviceInfo;
@property (nonatomic) MRAVOutputDevice mr_outputDevice;
@property (nonatomic) q mr_deviceClass;
@property (nonatomic) I mr_deviceSubType;
@property (nonatomic) NSArray linkedUserURIs;
@property (nonatomic) NSUUID nsuuid;
@property (nonatomic) NSUUID stableBluetoothIdentifier;
@property (nonatomic) BOOL supportsApplePay;
@property (nonatomic) BOOL supportsTethering;
@property (nonatomic) BOOL supportsHandoff;
@property (nonatomic) BOOL supportsiCloudPairing;
@property (nonatomic) BOOL supportsSMSRelay;
@property (nonatomic) BOOL supportsMMSRelay;
@property (nonatomic) BOOL supportsPhoneCalls;
@property (nonatomic) NSArray identities;
@property (nonatomic) NSData pushToken;
@property (nonatomic) NSDate lastActivityDate;
@property (nonatomic) BOOL isCloudConnected;
@property (nonatomic) IDSEndpointCapabilities capabilities;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString uniqueIDOverride;
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productVersion;
@property (nonatomic) {?=qqq} operatingSystemVersion;
@property (nonatomic) NSString productBuildVersion;
@property (nonatomic) NSString name;
@property (nonatomic) NSString service;
@property (nonatomic) q deviceType;
@property (nonatomic) NSString deviceColor;
@property (nonatomic) NSString enclosureColor;
@property (nonatomic) BOOL isHSATrusted;
@property (nonatomic) BOOL isDefaultPairedDevice;
@property (nonatomic) BOOL isLocallyPaired;
@property (nonatomic) BOOL isActive;
@property (nonatomic) q relationship;
@property (nonatomic) Q pairingProtocolVersion;
@property (nonatomic) Q minCompatibilityVersion;
@property (nonatomic) Q maxCompatibilityVersion;
@property (nonatomic) Q serviceMinCompatibilityVersion;
@property (nonatomic) BOOL nearby;
@property (nonatomic) BOOL connected;
@property (nonatomic) IDSDestination destination;
@property (nonatomic) BOOL locallyPresent;
- (id)mr_deviceInfo;
- (id)mr_outputDevice;
- (long long)mr_deviceClass;
- (unsigned int)mr_deviceSubType;
- (id)deviceColor;
- (long long)deviceType;
- (id)productName;
- (id)_internal;
- (id)_initWithDictionary:;
- (id)productVersion;
- (id)uniqueID;
- (void)dealloc;
- (id)fullDescription;
- (id)capabilities;
- (id)compactDescription;
- (id)identities;
- (long long)relationship;
- (id)operatingSystemVersion;
- (id)initWithDictionary:;
- (BOOL)supportsApplePay;
- (id)destination;
- (BOOL)supportsHandoff;
- (id)pushToken;
- (BOOL)supportsTethering;
- (id)service;
- (id)modelIdentifier;
- (id)lastActivityDate;
- (BOOL)isNearby;
- (void).cxx_destruct;
- (id)productBuildVersion;
- (BOOL)isConnected;
- (id)enclosureColor;
- (id)description;
- (id)name;
- (void)_setAccount:;
- (unsigned long long)minCompatibilityVersion;
- (BOOL)isActive;
- (BOOL)isDefaultPairedDevice;
- (id)nsuuid;
- (unsigned long long)pairingProtocolVersion;
- (id)uniqueIDOverride;
- (BOOL)isCloudConnected;
- (BOOL)locallyPresent;
- (BOOL)isLocallyPaired;
- (unsigned long long)maxCompatibilityVersion;
- (unsigned long long)serviceMinCompatibilityVersion;
- (id)linkedUserURIs;
- (void)setNSUUID:;
- (id)stableBluetoothIdentifier;
- (BOOL)supportsiCloudPairing;
- (BOOL)supportsSMSRelay;
- (BOOL)supportsMMSRelay;
- (BOOL)supportsPhoneCalls;
- (BOOL)isHSATrusted;
- (void)_addIdentity:;
- (void)_setService:;
@end
