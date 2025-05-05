@interface EAWiFiUnconfiguredAccessory : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString manufacturer;
@property (nonatomic) NSString model;
@property (nonatomic) NSString ssid;
@property (nonatomic) NSString macAddress;
@property (nonatomic) Q properties;
- (id)model;
- (id)manufacturer;
- (id)macAddress;
- (id)ssid;
- (unsigned long long)properties;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithAirPortAssistantWACDevice:;
@end
