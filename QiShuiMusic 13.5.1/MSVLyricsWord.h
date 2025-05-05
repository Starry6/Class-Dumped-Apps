@interface MSVLyricsWord : MSVLyricsTextElement
@property (nonatomic) MSVLyricsLine parentLine;
@property (nonatomic) MSVLyricsWord nextWord;
- (id)init;
- (void).cxx_destruct;
- (id)parentLine;
- (void)setParentLine:;
- (id)nextWord;
- (void)setNextWord:;
@end
