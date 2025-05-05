@interface CUIVectorGlyphMutator : NSObject
@property (nonatomic) ^{CGPath=} originPath;
@property (nonatomic) double pointSize;
@property (nonatomic) {?=^dQ} originPoints;
@property (nonatomic) {?=^dQ} ultralightDeltas;
@property (nonatomic) {?=^dQ} blackDeltas;
- (id)pathForScalars:;
- (void)setPointSize:;
- (void)dealloc;
- (id)blackDeltas;
- (double)pointSize;
- (id)originPoints;
- (id)cgPathFrom:;
- (void)setUltralightDeltas:;
- (void)setBlackDeltas:;
- (id)initWithPointSize:regular:ultralight:black:;
- (id)originPath;
- (void)setOriginPoints:;
- (id)pathForScalars:andTransform:;
- (id)applyDeltasWithScalars:andTransform:;
- (id)applyDeltasWithScalars:;
- (void)setOriginPath:;
- (id)ultralightDeltas;
+ (id)pointArrayFromPath:;
+ (id)deltaArrayFrom:to:;
+ (id)realloc_cgfloat_array:withNewCount:;
+ (id)transformForGlyphSize:;
+ (id)scalarsForGlyphWeight:glyphSize:;
@end
