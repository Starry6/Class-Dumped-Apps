@interface LCAudioEffectConfig : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} audioStreamBasicDescription;
- (void)setAudioStreamBasicDescription:;
- (id)defaultReverb2Format;
- (id)init;
- (void)setScene:;
- (unsigned long long)scene;
- (id)audioStreamBasicDescription;
+ (id)configWithScene:;
@end
