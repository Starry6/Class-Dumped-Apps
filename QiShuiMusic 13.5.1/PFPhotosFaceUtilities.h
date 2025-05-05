@interface PFPhotosFaceUtilities : NSObject
+ (id)sortedViableMergeCandidateFacesFor:from:ignoreSourceAssetDimensions:matchScores:;
+ (id)bestMergeCandidateFaceFor:from:ignoreSourceAssetDimensions:;
+ (long long)qualityMeasureForFace:countOfFacesOnAsset:;
+ (id)selectRepresentativeFromFaces:qualityMeasureByLocalIdentifier:representativenessByCSN:;
+ (id)selectRepresentativeFromFaces:qualityMeasureByLocalIdentifier:representativenessByCSN:candidateFaces:;
+ (BOOL)getCropRectForPortraitImage:size:imgWidth:imgHeight:centerX:centerY:;
+ (id)faceTileSizeAdjustingForImageAspectRatio:imgWidth:imgHeight:;
@end
