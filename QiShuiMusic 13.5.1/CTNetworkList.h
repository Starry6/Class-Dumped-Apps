@interface CTNetworkList : NSObject
@property (nonatomic) NSMutableArray networks;
@property (nonatomic) BOOL moreComing;
- (id)networks;
- (id)initWithCoder:;
- (void)setNetworks:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)moreComing;
- (void)setMoreComing:;
+ (BOOL)supportsSecureCoding;
@end
