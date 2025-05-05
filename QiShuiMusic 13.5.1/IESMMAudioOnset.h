@interface IESMMAudioOnset : NSObject
@property (nonatomic) IESAudioConverter musicConverter;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} absd;
@property (nonatomic) NSURL musicURL;
@property (nonatomic) float start;
@property (nonatomic) float duration;
@property (nonatomic) IESMMAudioOnsetResult result;
- (id)initWithFileURL:start:duration:;
- (id)convertNewFile:;
- (id)absd;
- (id)musicConverter;
- (id)musicURL;
- (void)setAbsd:;
- (void)setMusicConverter:;
- (void)setMusicURL:;
- (id)result;
- (void)setStart:;
- (void)dealloc;
- (float)start;
- (void)setDuration:;
- (void).cxx_destruct;
- (float)duration;
- (void)setResult:;
- (id)getResult;
@end
