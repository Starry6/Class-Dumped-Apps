@interface TUNearbyDeviceHandle : NSObject
@property (nonatomic) NSDictionary knownIdentifiersByHandleType;
@property (nonatomic) NSDictionary plistRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) q deviceModel;
@property (nonatomic) TUNearbyDeviceHandleCapabilities capabilities;
- (long long)deviceModel;
- (id)plistRepresentation;
- (id)identifierWithType:;
- (id)capabilities;
- (BOOL)isEqualToDeviceHandle:;
- (id)initWithName:knownIdentifiers:deviceModel:capabilities:;
- (BOOL)isEquivalentToDeviceHandle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithName:knownIdentifiers:;
- (id)initWithType:identifier:name:capabilities:;
- (void)encodeWithCoder:;
- (id)identifierDescription;
- (id)initWithType:identifier:name:;
- (void).cxx_destruct;
- (id)knownIdentifiersByHandleType;
- (id)description;
- (id)name;
- (id)initWithName:knownIdentifiers:deviceModel:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
