@interface MRTransactionPacketizer : NSObject
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)packetize:packageSize:completion:;
- (void)unpacketize:completion:;
@end
