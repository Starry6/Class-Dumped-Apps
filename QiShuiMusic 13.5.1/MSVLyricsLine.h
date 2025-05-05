@interface MSVLyricsLine : MSVLyricsTextElement
@property (nonatomic) BOOL instrumentalBreak;
@property (nonatomic) q lineIndex;
@property (nonatomic) q originalLineIndex;
@property (nonatomic) MSVLyricsSection parentSection;
@property (nonatomic) MSVLyricsLine nextLine;
@property (nonatomic) NSArray words;
@property (nonatomic) NSString translationKey;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)nextLine;
- (id)words;
- (void)setWords:;
- (long long)lineIndex;
- (void)setLineIndex:;
- (BOOL)containsTimeOffset:withErrorMargin:;
- (BOOL)isInstrumentalBreak;
- (void)setInstrumentalBreak:;
- (long long)originalLineIndex;
- (void)setOriginalLineIndex:;
- (id)parentSection;
- (void)setParentSection:;
- (void)setNextLine:;
- (id)translationKey;
- (void)setTranslationKey:;
@end
