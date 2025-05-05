@interface LAUICheckmarkLayer : CALayer
@property (nonatomic) double lineWidthScale;
@property (nonatomic) UIColor primaryColor;
@property (nonatomic) ^{CGColor=} color;
@property (nonatomic) BOOL revealed;
@property (nonatomic) {CGSize=dd} aspectSize;
- (id)primaryColor;
- (id)init;
- (void)dealloc;
- (BOOL)isRevealed;
- (void)layoutSublayers;
- (id)color;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)aspectSize;
- (void)setRevealed:animated:;
- (void)setColor:animated:;
- (void)setLineWidthScale:;
- (void)setPrimaryColor:animated:;
- (void)setRevealed:animated:withCompletion:;
- (id)defaultSizeForCircleWithDiameter:scale:;
- (void)_updateRevealedAnimated:;
- (void)_executeCompletions:;
- (void)_animationsDidResolve;
- (double)lineWidthScale;
@end
