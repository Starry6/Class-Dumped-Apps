@interface PLAssetSharingUtilities : NSObject
+ (id)playerItemForVideoURL:fallbackFilePath:library:;
+ (id)thumbnailForAssetURL:library:;
+ (id)aspectRatioThumbnailForAssetURL:library:;
+ (id)_thumbnailForAssetURL:library:useAspect:;
+ (id)filePathForVideoURL:library:outMetadata:;
+ (long long)estimatedOutputFileLengthForVideoURL:library:fallbackFilePath:exportPreset:exportProperties:;
+ (long long)estimatedOutputFileLengthForVideoFilePath:metadata:exportPreset:exportProperties:;
+ (double)_durationForVideoAssetURL:library:;
+ (double)_durationForVideoFilePath:;
+ (long long)_estimatedOutputFileLengthForDuration:exportPreset:exportProperties:;
+ (id)_objectBuilderFromVideoFilePath:metadata:;
+ (id)exportSessionForVideoURL:library:fallbackFilePath:exportPreset:;
+ (id)exportSessionForVideoFilePath:metadata:exportPreset:;
+ (id)_playerItemForVideoAssetURL:library:;
+ (id)playerItemForVideoFilePath:metadata:;
+ (id)assetForVideoURL:metadata:library:outAudioMix:outVideoComposition:;
@end
