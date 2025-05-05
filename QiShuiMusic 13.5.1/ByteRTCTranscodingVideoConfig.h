@interface ByteRTCTranscodingVideoConfig : NSObject
@property (nonatomic) Q codec;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q fps;
@property (nonatomic) q gop;
@property (nonatomic) q kBitRate;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL bFrame;
- (void)setGop:;
- (long long)gop;
- (long long)kBitRate;
- (void)setKBitRate:;
- (BOOL)bFrame;
- (void)setBFrame:;
- (id)init;
- (BOOL)lowLatency;
- (void)setWidth:;
- (unsigned long long)codec;
- (long long)height;
- (long long)width;
- (void)setLowLatency:;
- (void)setHeight:;
- (long long)fps;
- (void)setCodec:;
- (void)setFps:;
@end
