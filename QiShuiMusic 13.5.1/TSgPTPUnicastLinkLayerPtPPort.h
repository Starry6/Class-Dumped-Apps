@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort
@property (nonatomic) NSData destinationMACAddress;
- (void).cxx_destruct;
- (id)destinationMACAddress;
- (id)initWithImplXPC:;
+ (id)keyPathsForValuesAffectingDestinationMACAddress;
@end
