@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort
@property (nonatomic) NSData destinationIPv6Address;
- (void).cxx_destruct;
- (id)destinationIPv6Address;
- (id)initWithImplXPC:;
+ (id)keyPathsForValuesAffectingDestinationIPv6Address;
@end
