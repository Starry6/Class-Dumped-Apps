@interface CHTransliterateChineseJapaneseStep : CHPostprocessingStep
@property (nonatomic) ^^v icuTransliterator;
@property (nonatomic) BOOL transliterateSentences;
- (void)dealloc;
- (id)icuTransliterator;
- (void)setIcuTransliterator:;
- (id)process:options:;
- (id)initWithTransliterateSentences:;
- (id)handleChineseLigaturesInString:;
- (BOOL)transliterateSentences;
- (void)setTransliterateSentences:;
@end
