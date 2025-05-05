@interface CRCtcBeamSearch : NSObject
@property (nonatomic) ^{_LXLexicon=} dynamicLexicon;
@property (nonatomic) NSLocale locale;
- (void)dealloc;
- (id)locale;
- (id)initWithConfiguration:error:;
- (void).cxx_destruct;
- (id)dynamicLexicon;
- (void)setDynamicLexicon:;
- (id)kBestPathsForInput:k:beamWidth:outputProbs:outputWhitespaceRanges:error:;
@end
