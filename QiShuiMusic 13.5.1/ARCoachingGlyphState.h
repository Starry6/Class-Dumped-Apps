@interface ARCoachingGlyphState : NSObject
@property (nonatomic) <ARCoachingGlyphStateDelegate> delegate;
@property (nonatomic) Q snapState;
@property (nonatomic) {?=} quaternionTarget;
@property (nonatomic)  scaleTarget;
@property (nonatomic)  topPlaneTranslationTarget;
@property (nonatomic)  bottomPlaneTranslationTarget;
@property (nonatomic) BOOL isVertical;
- (BOOL)isVertical;
- (id)init;
- (void)setDelegate:;
- (void)setIsVertical:;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)snapState;
- (void)setSnapState:;
- (id)quaternionTarget;
- (void)setQuaternionTarget:;
- (id)scaleTarget;
- (void)setScaleTarget:;
- (void)setTopPlaneTranslationTarget:;
- (void)setBottomPlaneTranslationTarget:;
- (id)computeQuaternionTarget;
- (id)computeScaleTarget;
- (id)computeTopPlaneTranslationTarget;
- (id)computeBottomPlaneTranslationTarget;
- (id)topPlaneTranslationTarget;
- (id)bottomPlaneTranslationTarget;
@end
