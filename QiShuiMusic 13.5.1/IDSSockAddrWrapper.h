@interface IDSSockAddrWrapper : NSObject
@property (nonatomic) r^{sockaddr=CC[14c]} sa;
@property (nonatomic) r^{sockaddr_in=CCS{in_addr=I}[8c]} sa4;
@property (nonatomic) r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I} sa6;
@property (nonatomic) S saPortHostOrder;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSockAddr:;
- (id)sa;
- (id)sa4;
- (id)sa6;
- (unsigned short)saPortHostOrder;
- (BOOL)isEqualToSockAddr:;
- (BOOL)isEqualToWrapper:;
- (id)ipData;
- (id)ipString;
- (void)copySockAddr:;
- (void)updateLocalPort:;
+ (id)wrapperWithSockAddr:;
+ (id)wrapperWithAddressString:withPortHostOrder:withInterfaceName:;
+ (id)wrapperWithAddressString:withPortHostOrder:;
+ (id)wrapperWithWrapper:andPortHostOrder:;
@end
