@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort
@property (nonatomic) NSNumber destinationIPv4Address;
- (void).cxx_destruct;
- (id)destinationIPv4Address;
- (id)initWithImplXPC:;
+ (id)keyPathsForValuesAffectingDestinationIPv4Address;
@end
