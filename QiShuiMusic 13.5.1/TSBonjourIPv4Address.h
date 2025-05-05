@interface TSBonjourIPv4Address : NSObject
@property (nonatomic) BOOL hasLinkLayerAddress;
@property (nonatomic) I ipv4Address;
@property (nonatomic) r* linkLayerAddress;
- (id)init;
- (id)copyWithZone:;
- (unsigned int)ipv4Address;
- (id)initWithIPv4Address:;
- (id)linkLayerAddress;
- (BOOL)getLinkLayerAddressError:;
- (BOOL)hasLinkLayerAddress;
- (void)setHasLinkLayerAddress:;
+ (BOOL)getLinkLayerAddress:forIPv4Address:error:;
@end
