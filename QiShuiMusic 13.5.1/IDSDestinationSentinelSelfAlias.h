@interface IDSDestinationSentinelSelfAlias : IDSDestination
- (id)initWithCoder:;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
