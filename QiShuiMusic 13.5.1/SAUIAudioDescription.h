@interface SAUIAudioDescription : AceObject
@property (nonatomic) NSNumber bitsPerChannel;
@property (nonatomic) NSNumber bytesPerFrame;
@property (nonatomic) NSNumber bytesPerPacket;
@property (nonatomic) NSNumber channelsPerFrame;
@property (nonatomic) NSString format;
@property (nonatomic) NSNumber formatFlags;
@property (nonatomic) NSNumber formatID;
@property (nonatomic) NSNumber framesPerPacket;
@property (nonatomic) NSNumber reserved;
@property (nonatomic) NSNumber sampleRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFormat:;
- (id)reserved;
- (id)groupIdentifier;
- (id)format;
- (id)sampleRate;
- (void)setReserved:;
- (id)encodedClassName;
- (void)setSampleRate:;
- (id)formatID;
- (void)setFormatID:;
- (id)formatFlags;
- (id)bytesPerPacket;
- (id)framesPerPacket;
- (id)bytesPerFrame;
- (id)channelsPerFrame;
- (id)bitsPerChannel;
- (void)setBytesPerFrame:;
- (void)setBitsPerChannel:;
- (void)setBytesPerPacket:;
- (void)setChannelsPerFrame:;
- (void)setFormatFlags:;
- (void)setFramesPerPacket:;
+ (id)audioDescription;
+ (id)audioDescriptionWithDictionary:context:;
@end
