@interface TSXgPTPNetworkPortExported : NSObject
@property (nonatomic) TSXgPTPNetworkPort object;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setObject:;
- (void).cxx_destruct;
- (id)object;
- (void)updatedPortProperties:;
- (void)changedASCapable:;
- (void)changedAdministrativeEnable:;
- (void)timedoutMACLookup;
- (void)announceTimeout;
- (void)syncTimeoutWithMean:median:standardDeviation:minimum:maximum:numberOfSamples:;
- (void)terminatedService;
@end
