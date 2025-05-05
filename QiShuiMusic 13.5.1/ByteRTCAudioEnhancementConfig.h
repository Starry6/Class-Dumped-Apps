@interface ByteRTCAudioEnhancementConfig : NSObject
@property (nonatomic) BOOL enhanceSignaling;
@property (nonatomic) BOOL enhanceAudio;
- (BOOL)enhanceSignaling;
- (void)setEnhanceSignaling:;
- (BOOL)enhanceAudio;
- (void)setEnhanceAudio:;
@end
