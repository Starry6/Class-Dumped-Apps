@interface MRAudioBuffer : NSObject
@property (nonatomic) AVAudioCompressedBuffer buffer;
@property (nonatomic) NSDictionary formatSettings;
- (id)buffer;
- (void).cxx_destruct;
- (id)initWithFormatSettings:packetCapacity:maximumPacketSize:;
- (id)formatSettings;
@end
