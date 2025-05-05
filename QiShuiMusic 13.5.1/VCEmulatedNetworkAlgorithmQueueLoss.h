@interface VCEmulatedNetworkAlgorithmQueueLoss : NSObject
@property (nonatomic) double expectedProcessEndTime;
@property (nonatomic) I packetCountInNetworkQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)process:;
- (void)updateSettingsAtTime:impairments:;
- (double)expectedProcessEndTime;
- (unsigned int)packetCountInNetworkQueue;
- (void)setPacketCountInNetworkQueue:;
@end
