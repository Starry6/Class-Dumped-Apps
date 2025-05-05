@interface CHReorderSCTCConfusionStep : CHPostprocessingStep
@property (nonatomic) ^^v icuTransliterator;
@property (nonatomic) q maxResultCount;
- (void)dealloc;
- (void)setMaxResultCount:;
- (long long)maxResultCount;
- (id)icuTransliterator;
- (void)setIcuTransliterator:;
- (id)process:options:;
- (id)initWithMaxResultCount:;
@end
