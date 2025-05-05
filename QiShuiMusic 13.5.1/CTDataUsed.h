@interface CTDataUsed : NSObject
@property (nonatomic) CTDataUsage native;
@property (nonatomic) CTDataUsage proxied;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)native;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addUsage:;
- (id)initWithUsage:proxied:;
- (void)addNativeUsage:;
- (void)addProxiedUsage:;
- (id)proxied;
+ (BOOL)supportsSecureCoding;
@end
