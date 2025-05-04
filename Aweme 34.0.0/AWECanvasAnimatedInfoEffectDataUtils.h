@interface AWECanvasAnimatedInfoEffectDataUtils : NSObject
+ (id)cachedEffectModelWithIdentifier:panel:category:;
+ (void)socialExpressionEffectModelWithPanel:category:effectId:completion:;
+ (id)findEffectWithIdentifier:fromEffects:;
+ (void)downloadEffectModel:completion:;
+ (void)socialExpressionEffectModelWithPanel:category:effectId:isColdStart:completion:;
@end
