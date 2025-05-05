@interface ByteRTCMediaTypeEnhancementConfig : NSObject
@property (nonatomic) BOOL enhanceSignaling;
@property (nonatomic) BOOL enhanceAudio;
@property (nonatomic) BOOL enhanceVideo;
@property (nonatomic) BOOL enhanceScreenAudio;
@property (nonatomic) BOOL enhanceScreenVideo;
- (BOOL)enhanceSignaling;
- (void)setEnhanceSignaling:;
- (BOOL)enhanceAudio;
- (void)setEnhanceAudio:;
- (BOOL)enhanceVideo;
- (void)setEnhanceVideo:;
- (BOOL)enhanceScreenAudio;
- (void)setEnhanceScreenAudio:;
- (BOOL)enhanceScreenVideo;
- (void)setEnhanceScreenVideo:;
@end
