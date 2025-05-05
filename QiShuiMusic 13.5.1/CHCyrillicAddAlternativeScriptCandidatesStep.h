@interface CHCyrillicAddAlternativeScriptCandidatesStep : CHPostprocessingStep
@property (nonatomic) r^{_LXLexicon=} staticLexicon;
@property (nonatomic) r^{_LXLexicon=} customLexicon;
- (id)staticLexicon;
- (void)setStaticLexicon:;
- (id)customLexicon;
- (void)setCustomLexicon:;
- (id)process:options:;
- (id)initWithStaticLexicon:customLexicon:;
@end
