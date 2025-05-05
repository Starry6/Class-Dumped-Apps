@interface LPAudioPlayButtonStyle : NSObject
@property (nonatomic) LPSize size;
@property (nonatomic) LPPointUnit glyphSize;
@property (nonatomic) LPAudioPlayButtonTheme defaultTheme;
@property (nonatomic) LPAudioPlayButtonTheme appleMusicTheme;
@property (nonatomic) LPAudioPlayButtonTheme podcastsTheme;
@property (nonatomic) LPAudioPlayButtonTheme audioBookTheme;
@property (nonatomic) LPAudioPlayButtonTheme lyricExcerptTheme;
- (id)init;
- (id)defaultTheme;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
- (id)glyphSize;
- (void)setGlyphSize:;
- (id)appleMusicTheme;
- (id)podcastsTheme;
- (id)audioBookTheme;
- (id)lyricExcerptTheme;
@end
