@interface IESEffectUtil : NSObject
+ (id)algorithmModelNamesWithRequirement:;
+ (id)algorithmModelNamesWithRequirements:;
+ (BOOL)compareOnlineModel:withBaseRecord:;
+ (BOOL)disablePeekResource;
+ (id)getAlgorithmNamesFromAlgorithmRequirements:;
+ (void)getModelNameAndVersionWithFullModelName:modelName:version:;
+ (BOOL)getShortNameAndVersionWithModelName:shortName:version:;
+ (BOOL)isVersion:higherOrEqualThan:;
+ (BOOL)isVersion:higherThan:;
+ (BOOL)isVersionString:;
+ (id)mergeRequirements:withModelNames:;
+ (id)mergeWithRequirements:modelNames:;
+ (void)parseModelFilePath:completion:;
+ (void)setDisablePeekResource:;
@end
