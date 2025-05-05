@interface IDSDestinationPushToken : IDSDestination
@property (nonatomic) NSString alias;
@property (nonatomic) NSData pushToken;
- (id)initWithAlias:pushToken:;
- (id)alias;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)pushToken;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
