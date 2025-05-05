@interface VEAudioDuration : IESMMObject
@property (nonatomic) @? completion;
@property (nonatomic) BOOL readyToProducePackets;
@property (nonatomic) double packetDuration;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} format;
@property (nonatomic) Q fileSize;
@property (nonatomic) BOOL ended;
- (void)calculatepPacketDuration;
- (void)closeAudioFileStream;
- (void)getAudioDuration:completion:;
- (void)handleAudioFileStreamPackets:numberOfBytes:numberOfPackets:packetDescriptions:;
- (void)handleAudioFileStreamProperty:;
- (double)packetDuration;
- (BOOL)readyToProducePackets;
- (void)setPacketDuration:;
- (void)setReadyToProducePackets:;
- (id)completion;
- (unsigned long long)fileSize;
- (void)setFormat:;
- (void)setCompletion:;
- (void)dealloc;
- (id)format;
- (float)getDuration;
- (int)parseData:;
- (void)setFileSize:;
- (void).cxx_destruct;
- (BOOL)ended;
- (void)setEnded:;
@end
