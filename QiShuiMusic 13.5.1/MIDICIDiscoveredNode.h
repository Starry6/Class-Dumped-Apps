@interface MIDICIDiscoveredNode : NSObject
@property (nonatomic) I destination;
@property (nonatomic) MIDICIDeviceInfo deviceInfo;
@property (nonatomic) BOOL supportsProfiles;
@property (nonatomic) BOOL supportsProperties;
@property (nonatomic) NSNumber maximumSysExSize;
- (id)init;
- (id)deviceInfo;
- (unsigned int)destination;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithDestination:deviceID:profilesSupported:propertiesSupported:maxSysExSize:;
- (id)maximumSysExSize;
- (BOOL)supportsProfiles;
- (BOOL)supportsProperties;
+ (BOOL)supportsSecureCoding;
+ (id)description;
@end
