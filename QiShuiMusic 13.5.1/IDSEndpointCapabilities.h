@interface IDSEndpointCapabilities : NSObject
- (BOOL)isEqualToEndpointCapabilites:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (long long)valueForCapability:;
- (id)description;
- (id)initWithCapabilitiesMap:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)allowedCapabilities;
@end
