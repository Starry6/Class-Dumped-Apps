@interface PAReplayKitAccess : PAAccess
@property (nonatomic) PAApplication broadcaster;
- (id)JSONObject;
- (id)initWithProtoData:;
- (id)proto;
- (id)initWithAccessor:broadcaster:identifier:kind:;
- (BOOL)isEqualToAccess:withOptions:;
- (id)initWithCoder:;
- (id)broadcaster;
- (id)initWithAccessor:;
- (void)encodeWithCoder:;
- (unsigned long long)hashWithOptions:;
- (id)initWithProto:;
- (id)copyWithNewBroadcaster:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccessor:fromBroadcaster:;
- (id)category;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)accessWithAccessor:;
+ (id)accessWithAccessor:fromBroadcaster:;
+ (id)eventStreamIdentifier;
@end
