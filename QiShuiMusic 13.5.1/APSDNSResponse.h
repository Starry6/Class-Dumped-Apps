@interface APSDNSResponse : NSObject
@property (nonatomic) NSString hostname;
@property (nonatomic) NSArray ipv4Address;
@property (nonatomic) NSArray ipv6Address;
- (id)hostname;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initResponseForHostname:ipv4Address:ipv6Address:;
- (id)ipv4Address;
- (id)ipv6Address;
+ (BOOL)supportsSecureCoding;
@end
