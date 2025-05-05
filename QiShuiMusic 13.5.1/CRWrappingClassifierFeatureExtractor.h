@interface CRWrappingClassifierFeatureExtractor : NSObject
+ (void)_extractBagOfTokensFeaturesTo:vocabulary:tokens:beginIndex:endIndex:;
+ (id)_tokenizeString:usingWordUnits:excludeWhitespace:;
+ (void)_extractLanguageModelFeaturesTo:evaluation:;
+ (void)_extractGeometricFeaturesTo:evaluation:;
+ (void)_extractEvaluatedFeaturesTo:evaluation:;
+ (void)_extractLexicalFeaturesTo:string1:string2:configuration:forCJK:;
+ (id)extractFeatureVectorForLocale:string1:string2:evaluation:imageSize:;
+ (id)nsArrayFromVector:;
+ (id)multiArrayFromVector:;
+ (id)extractFeaturesForLocale:textFeature:lastFeature:imageSize:revision:;
+ (id)extractFeatureMultiArrayForLocale:textFeature:lastFeature:evaluation:imageSize:;
@end
