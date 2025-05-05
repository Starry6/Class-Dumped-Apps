@interface SiriTTSAudioData : NSObject
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} asbd;
@property (nonatomic) NSData audioData;
@property (nonatomic) q packetCount;
@property (nonatomic) NSData packetDescriptions;
@property (nonatomic) NSString description;
- (BOOL)isEqual:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setPacketCount:;
- (id)packetDescriptions;
- (long long)packetCount;
- (void)setPacketDescriptions:;
- (id)asbd;
- (void)setAsbd:;
- (id)audioData;
- (void)setAudioData:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
