@interface VCMockIDSDatagramChannelSocket : VCMockIDSDatagramChannel
- (void)dealloc;
- (void)writeDatagrams:datagramsSize:datagramsInfo:datagramsCount:options:completionHandler:;
- (void)writeDatagram:datagramSize:flags:completionHandler:;
- (void)writeDatagram:datagramSize:datagramInfo:options:completionHandler:;
- (int)readyToRead;
- (id)initRequiresOptions:localIP:localPort:remoteIP:remotePort:;
- (void)writeDatagram:datagramSize:;
- (void)setAllSubscribedStreamIDsOnOptions:;
- (void)setIsHopByHopEncryptedOnOptions:;
- (void)setParticipantIDOnOptions:;
@end
