@interface ByteRTCSingScoringConfig : NSObject
@property (nonatomic) q mode;
@property (nonatomic) q sampleRate;
@property (nonatomic) NSString lyricsFilepath;
@property (nonatomic) NSString midiFilepath;
- (id)lyricsFilepath;
- (void)setLyricsFilepath:;
- (id)midiFilepath;
- (void)setMidiFilepath:;
- (long long)sampleRate;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
- (void)setSampleRate:;
@end
