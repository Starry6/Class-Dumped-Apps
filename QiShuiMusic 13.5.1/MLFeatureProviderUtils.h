@interface MLFeatureProviderUtils : NSObject
+ (id)_featureValuesForNames:providedBy:error:;
+ (long long)_vectorizedSizeOfFeatureValues:error:;
+ (BOOL)_vectorizeWithoutSizeCheckFeatureValues:intoDoubleVector:stride:error:;
+ (BOOL)vectorizeFeaturesProvidedBy:featureNames:intoDoubleVector:length:stride:error:;
+ (id)vectorizeFeaturesProvidedBy:featureNames:error:;
+ (BOOL)canVectorizeFeatureWithDescription:;
+ (BOOL)canVectorizeAllFeaturesWithDescriptions:;
+ (id)providerWithSubsetOfFeaturesNamed:providedBy:;
+ (id)lazyProviderWithFeaturesProvidedBy:addedToFeaturesProvidedBy:;
@end
