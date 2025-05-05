@interface UIColorEffect : UIVisualEffect
- (void)_updateEffectDescriptor:forEnvironment:usage:;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_filterEntry;
- (long long)_expectedUsage;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)_colorEffectSourceOver:;
+ (id)colorEffectMatrix:;
+ (id)colorEffectBrightness:;
+ (BOOL)supportsSecureCoding;
+ (id)_colorEffectCAMatrix:;
+ (id)colorEffectCurvesRed:green:blue:alpha:;
+ (id)colorEffectAdd:;
+ (id)colorEffectSubtract:;
+ (id)colorEffectLuminanceCurveMap:blendingAmount:;
+ (id)colorEffectMultiply:;
+ (id)colorEffectMonochromeTint:blendingAmount:brightnessAdjustment:;
+ (id)colorEffectInvert;
+ (id)colorEffectColor:;
+ (id)colorEffectSaturate:;
+ (id)colorEffectContrast:;
+ (id)colorEffectLuminanceMap:blendingAmount:;
@end
