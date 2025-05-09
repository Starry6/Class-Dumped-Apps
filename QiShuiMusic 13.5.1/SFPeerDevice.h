@interface SFPeerDevice : NSObject
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productVersion;
@property (nonatomic) NSString productBuildVersion;
@property (nonatomic) NSString name;
@property (nonatomic) NSString deviceColor;
@property (nonatomic) NSString enclosureColor;
@property (nonatomic) BOOL defaultPairedDevice;
@property (nonatomic) BOOL validKey;
@property (nonatomic) q keyCounter;
- (void)setProductName:;
- (id)deviceColor;
- (id)productName;
- (void)setProductVersion:;
- (id)productVersion;
- (id)uniqueID;
- (void)setEnclosureColor:;
- (void)setName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)modelIdentifier;
- (void)setUniqueID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)productBuildVersion;
- (id)enclosureColor;
- (id)description;
- (void)setDeviceColor:;
- (id)name;
- (BOOL)isEqual:;
- (BOOL)isDefaultPairedDevice;
- (void)setModelIdentifier:;
- (void)setDefaultPairedDevice:;
- (void)setProductBuildVersion:;
- (BOOL)validKey;
- (void)setValidKey:;
- (long long)keyCounter;
- (void)setKeyCounter:;
+ (BOOL)supportsSecureCoding;
@end
