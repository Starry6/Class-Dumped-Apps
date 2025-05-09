@interface SFPowerSource : NSObject
@property (nonatomic) NSDictionary ioKitAdapterDescription;
@property (nonatomic) NSDictionary ioKitDescription;
@property (nonatomic) BOOL added;
@property (nonatomic) BOOL present;
@property (nonatomic) I changes;
@property (nonatomic) NSString accessoryCategory;
@property (nonatomic) NSString accessoryID;
@property (nonatomic) NSData batteryCaseAddress;
@property (nonatomic) BOOL charging;
@property (nonatomic) double chargeLevel;
@property (nonatomic) q color;
@property (nonatomic) q familyCode;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSArray LEDs;
@property (nonatomic) BOOL lowPowerModeEnabled;
@property (nonatomic) double lowWarnLevel;
@property (nonatomic) BOOL internal;
@property (nonatomic) double maxCapacity;
@property (nonatomic) NSString name;
@property (nonatomic) NSString partID;
@property (nonatomic) NSString partName;
@property (nonatomic) NSInteger powerState;
@property (nonatomic) q productID;
@property (nonatomic) NSInteger role;
@property (nonatomic) BOOL showChargingUI;
@property (nonatomic) q sourceID;
@property (nonatomic) NSString state;
@property (nonatomic) q temperature;
@property (nonatomic) NSString transportType;
@property (nonatomic) NSString type;
@property (nonatomic) q vendorID;
@property (nonatomic) BOOL wirelessCharging;
@property (nonatomic) q adapterErrorFlags;
@property (nonatomic) q adapterFamilyCode;
@property (nonatomic) NSString adapterName;
@property (nonatomic) BOOL adapterSharedSource;
@property (nonatomic) q adapterSourceID;
@property (nonatomic) q matID;
- (long long)productID;
- (void)setVendorID:;
- (int)publish;
- (void)setSourceID:;
- (void)setGroupID:;
- (void)_updateWithCoder:;
- (long long)vendorID;
- (id)groupID;
- (void)setTransportType:;
- (id)adapterName;
- (id)init;
- (long long)adapterFamilyCode;
- (BOOL)added;
- (void)dealloc;
- (void)setName:;
- (BOOL)isLowPowerModeEnabled;
- (int)powerState;
- (void)setAdded:;
- (void)setProductID:;
- (BOOL)present;
- (long long)sourceID;
- (void)setCharging:;
- (double)maxCapacity;
- (void)setState:;
- (id)partName;
- (void)setLowPowerModeEnabled:;
- (void)setColor:;
- (void)setTemperature:;
- (id)accessoryID;
- (void)setAccessoryCategory:;
- (BOOL)isInternal;
- (void)setType:;
- (id)ioKitAdapterDescription;
- (id)transportType;
- (id)partID;
- (long long)familyCode;
- (void)setLEDs:;
- (void)setAdapterSharedSource:;
- (void)setIoKitAdapterDescription:;
- (long long)matID;
- (id)initWithCoder:;
- (void)setAdapterName:;
- (unsigned long long)hash;
- (void)setPartID:;
- (BOOL)adapterSharedSource;
- (id)batteryCaseAddress;
- (void)startLowPowerMonitoringIfAppropriate;
- (id)LEDs;
- (id)accessoryCategory;
- (BOOL)showChargingUI;
- (void)setChanges:;
- (unsigned int)changes;
- (long long)adapterErrorFlags;
- (void)lowPowerModeChanged:;
- (long long)color;
- (void)encodeWithCoder:;
- (void)setRole:;
- (void)setShowChargingUI:;
- (id)type;
- (void)setPartName:;
- (BOOL)charging;
- (id)state;
- (void)setAccessoryID:;
- (void)setLowWarnLevel:;
- (void)setMaxCapacity:;
- (void).cxx_destruct;
- (void)setAdapterFamilyCode:;
- (void)setFamilyCode:;
- (void)setAdapterErrorFlags:;
- (void)setPresent:;
- (double)chargeLevel;
- (void)setIoKitDescription:;
- (int)role;
- (id)description;
- (id)name;
- (double)lowWarnLevel;
- (void)setChargeLevel:;
- (void)setBatteryCaseAddress:;
- (id)detailedDescription;
- (unsigned int)updateWithPowerSourceDescription:;
- (void)setPowerState:;
- (long long)temperature;
- (void)invalidate;
- (BOOL)wirelessCharging;
- (BOOL)isEqual:;
- (void)updateWithPowerSource:;
- (long long)adapterSourceID;
- (id)ioKitDescription;
- (void)setAdapterSourceID:;
- (unsigned int)updateWithPowerAdapterDetails:;
+ (BOOL)supportsSecureCoding;
@end
