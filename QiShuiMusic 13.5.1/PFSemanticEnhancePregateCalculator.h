@interface PFSemanticEnhancePregateCalculator : NSObject
+ (BOOL)isSemanticDevelopmentEnabledInCameraSettings;
+ (id)semanticEnhanceSceneForCameraMetadata:;
+ (id)filterForSemanticEnhanceScene:;
+ (id)semanticEnhanceSceneForCameraMetadata:ignoreCameraSetting:;
+ (long long)semanticEnhanceSceneForPrivateClientMetadata:;
@end
