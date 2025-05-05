@interface CIEnhancementCalculator : CIEnhancementCalculation
@property (nonatomic) BOOL faceBalanceEnabled;
@property (nonatomic) BOOL vibranceEnabled;
@property (nonatomic) BOOL curvesEnabled;
@property (nonatomic) BOOL shadowsEnabled;
- (id)init;
- (void)dealloc;
- (id)histogramFromRows:componentOffset:;
- (void)setupHistogramsUsing:redIndex:greenIndex:blueIndex:;
- (void)analyzeFeatures:usingContext:baseImage:;
- (id)setupFaceColorFromImage:usingContext:detectorOpts:;
- (void)setupFaceColorFromImage:usingContext:features:;
- (BOOL)faceBalanceEnabled;
- (void)setFaceBalanceEnabled:;
- (BOOL)vibranceEnabled;
- (void)setVibranceEnabled:;
- (BOOL)curvesEnabled;
- (void)setCurvesEnabled:;
- (BOOL)shadowsEnabled;
- (void)setShadowsEnabled:;
@end
