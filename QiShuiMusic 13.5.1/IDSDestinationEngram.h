@interface IDSDestinationEngram : IDSDestination
@property (nonatomic) ENGroup underlyingGroup;
- (id)initWithCoder:;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithENGroup:;
- (id)description;
- (id)underlyingGroup;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
