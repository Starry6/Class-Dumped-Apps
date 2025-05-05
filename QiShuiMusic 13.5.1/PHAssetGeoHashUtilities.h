@interface PHAssetGeoHashUtilities : NSObject
+ (id)assetUUIDsFromBiomeStream;
+ (id)assetUUIDsFromBiomeStreamWithPhotoLibrary:;
+ (id)featureVectorByGeoHashForAssetUUID:geoHashSize:geoHashKeySize:sceneLabelMapping:dryRun:;
+ (id)featureVectorByGeoHashForAssetUUID:geoHashSize:geoHashKeySize:sceneLabelMapping:dryRun:photoLibrary:;
+ (id)featureVectorByGeoHashForAssetUUIDs:geoHashSize:geoHashKeySize:sceneLabelMapping:dryRun:;
+ (id)featureVectorByGeoHashForAssetUUIDs:geoHashSize:geoHashKeySize:sceneLabelMapping:dryRun:photoLibrary:;
+ (id)mockReturnDataWithAssetUUIDs:geoHashKeySize:;
+ (unsigned long long)_randomSceneIndexForAsset:sceneLabelMapping:orderedRemappedSceneLabels:;
+ (id)_sceneLabelsForSceneClassifications:;
+ (unsigned long long)_randomIndexFromCount:;
+ (unsigned long long)_indexForPOIGeoHash:geoHashKeySize:;
+ (id)_featureVectorDataWithOneHotAtIndex:featureVectorSize:;
+ (id)_newSystemPhotoLibrary;
+ (id)_randomPublishedUUIDsFromPublishedUUIDs:sentUUIDs:;
+ (id)sceneLabelExclusionList;
+ (id)poiGeoHashWithGeoHashSize:latitude:longitude:;
+ (id)_poiGeoHashForAsset:geoHashSize:;
@end
