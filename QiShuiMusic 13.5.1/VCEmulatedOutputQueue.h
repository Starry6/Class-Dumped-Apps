@interface VCEmulatedOutputQueue : VCEmulatedNetworkElement
@property (nonatomic) I numberOfPacketsInOutputQueue;
- (id)copyPacketFromPop;
- (void)runUntilTime:;
- (void)connectFrom:;
- (unsigned int)numberOfPacketsInOutputQueue;
@end
