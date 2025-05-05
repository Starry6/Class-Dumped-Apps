@interface IESLiveLinkRTCInteractTranscodingVideoConfig : NSObject
@property (nonatomic) NSString codec;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q fps;
@property (nonatomic) q gop;
@property (nonatomic) q kBitRate;
@property (nonatomic) BOOL lowLatency;
- (void)setGop:;
- (long long)gop;
- (long long)kBitRate;
- (void)setKBitRate:;
- (BOOL)lowLatency;
- (void)setWidth:;
- (id)codec;
- (long long)height;
- (long long)width;
- (void)setLowLatency:;
- (void)setHeight:;
- (void).cxx_destruct;
- (long long)fps;
- (void)setCodec:;
- (void)setFps:;
@end
