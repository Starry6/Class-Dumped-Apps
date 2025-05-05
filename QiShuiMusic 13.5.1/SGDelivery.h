@interface SGDelivery : SGObject
@property (nonatomic) NSURL parentURL;
@property (nonatomic) NSString externalIdentifier;
@property (nonatomic) Q provider;
@property (nonatomic) NSString trackingNumber;
- (id)externalIdentifier;
- (id)initWithCoder:;
- (unsigned long long)provider;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)trackingNumber;
- (id)parentURL;
- (id)initWithRecordId:origin:parentURL:provider:trackingNumber:;
+ (BOOL)supportsSecureCoding;
+ (id)stringForProvider:;
+ (unsigned long long)providerForString:;
@end
