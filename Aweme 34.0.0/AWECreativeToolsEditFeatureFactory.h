@interface AWECreativeToolsEditFeatureFactory : NSObject
+ (id)editFeaturesWithFeatureConfigs:mediaType:shouldUseImageAlbumEditor:;
+ (id)pluginsWithComponentClasses:;
+ (id)availableFeatureTypesForMediaType:;
+ (id)editFeatureFeatureConfig:;
+ (id)featureConfigForFeatureType:mediaType:featureEditor:;
+ (id)availableFeatureTypesForMixedEdit;
+ (id)availableFeatureTypesForImageEdit;
+ (id)availableFeatureTypesForVideoEdit;
+ (id)featureConfigsWithFeatureTypes:mediaType:featureEditor:;
@end
