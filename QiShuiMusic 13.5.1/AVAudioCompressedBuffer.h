@interface AVAudioCompressedBuffer : AVAudioBuffer
@property (nonatomic) I packetCapacity;
@property (nonatomic) I packetCount;
@property (nonatomic) q maximumPacketSize;
@property (nonatomic) ^v data;
@property (nonatomic) I byteCapacity;
@property (nonatomic) I byteLength;
@property (nonatomic) ^{AudioStreamPacketDescription=qII} packetDescriptions;
- (id)data;
- (void)setPacketCount:;
- (id)initWithFormat:packetCapacity:maximumPacketSize:;
- (id)packetDescriptions;
- (unsigned int)packetCapacity;
- (long long)maximumPacketSize;
- (unsigned int)packetCount;
- (id)initWithFormat:packetCapacity:;
@end
