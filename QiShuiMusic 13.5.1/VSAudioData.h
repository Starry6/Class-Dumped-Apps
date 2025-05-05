@interface VSAudioData : NSObject
@property (nonatomic) NSMutableData mutableAudioData;
@property (nonatomic) NSMutableData mutableDescription;
@property (nonatomic) NSData audioData;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} asbd;
@property (nonatomic) q packetCount;
@property (nonatomic) NSData packetDescriptions;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)duration;
- (id)copyWithZone:;
- (void)setPacketCount:;
- (id)packetDescriptions;
- (long long)packetCount;
- (void)setPacketDescriptions:;
- (id)asbd;
- (void)setAsbd:;
- (id)audioData;
- (void)setAudioData:;
- (unsigned int)totalFrames;
- (void)concatenateWithAudio:;
- (id)mutableAudioData;
- (void)setMutableAudioData:;
- (id)mutableDescription;
- (void)setMutableDescription:;
+ (BOOL)supportsSecureCoding;
@end
