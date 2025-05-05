@interface SAUIAudioData : AceObject
@property (nonatomic) NSData audioBuffer;
@property (nonatomic) SAUIAudioDescription decoderStreamDescription;
@property (nonatomic) SAUIAudioDescription playerStreamDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)audioBuffer;
- (void)setAudioBuffer:;
- (id)decoderStreamDescription;
- (void)setDecoderStreamDescription:;
- (id)playerStreamDescription;
- (void)setPlayerStreamDescription:;
+ (id)audioData;
+ (id)audioDataWithDictionary:context:;
@end
