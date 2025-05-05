@interface UIVisualEffect : NSObject
@property (nonatomic) _UIBackdropViewSettings effectSettings;
@property (nonatomic) BOOL _isATVStyle;
@property (nonatomic) BOOL _isAutomaticStyle;
@property (nonatomic) _UIVisualEffectConfig effectConfig;
- (void)_updateEffectDescriptor:forEnvironment:usage:;
- (id)effectConfig;
- (void)_enumerateEffects:;
- (BOOL)_needsUpdateForTransitionFromEnvironment:toEnvironment:usage:;
- (id)effectSettings;
- (id)initWithCoder:;
- (id)effectForUserInterfaceStyle:;
- (id)effectConfigForQuality:;
- (void)encodeWithCoder:;
- (BOOL)_isAutomaticStyle;
- (id)_allEffects;
- (long long)_expectedUsage;
- (BOOL)_isATVStyle;
- (id)copyWithZone:;
- (BOOL)_selectorOverridden:;
+ (BOOL)supportsSecureCoding;
+ (id)emptyEffect;
+ (id)effectCombiningEffects:;
+ (id)effectCompositingImage:;
+ (id)effectCompositingColor:;
+ (id)effectCompositingImage:withMode:alpha:;
+ (id)effectCompositingColor:withMode:alpha:;
+ (id)_effectCopyingFromCaptureGroup:;
@end
