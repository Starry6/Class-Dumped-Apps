@interface TUCloudCallingDevice : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSArray linkedUserURIs;
@property (nonatomic) BOOL defaultPairedDevice;
@property (nonatomic) BOOL supportsRestrictingSecondaryCalling;
- (id)uniqueID;
- (void)setName:;
- (id)initWithCoder:;
- (id)modelIdentifier;
- (void)setUniqueID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isDefaultPairedDevice;
- (void)setModelIdentifier:;
- (id)linkedUserURIs;
- (void)setDefaultPairedDevice:;
- (BOOL)supportsRestrictingSecondaryCalling;
- (void)setSupportsRestrictingSecondaryCalling:;
- (void)setLinkedUserURIs:;
+ (BOOL)supportsSecureCoding;
@end
