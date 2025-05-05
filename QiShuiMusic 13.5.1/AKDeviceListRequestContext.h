@interface AKDeviceListRequestContext : NSObject
@property (nonatomic) NSString altDSID;
@property (nonatomic) BOOL includeUntrustedDevices;
@property (nonatomic) BOOL includeFamilyDevices;
@property (nonatomic) NSArray services;
@property (nonatomic) NSArray operatingSystems;
- (void)setServices:;
- (void)setAltDSID:;
- (id)altDSID;
- (id)initWithCoder:;
- (id)operatingSystems;
- (void)encodeWithCoder:;
- (BOOL)includeUntrustedDevices;
- (void)setOperatingSystems:;
- (void).cxx_destruct;
- (void)setIncludeFamilyDevices:;
- (id)description;
- (BOOL)includeFamilyDevices;
- (id)services;
- (void)setIncludeUntrustedDevices:;
+ (BOOL)supportsSecureCoding;
@end
