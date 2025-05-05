@interface IDSDestinationDefaultPairedDevice : IDSDestination
- (BOOL)isEqualToIDSDestinationDefaultPairedDevice:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
