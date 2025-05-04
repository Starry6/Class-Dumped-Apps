@interface AWEMemoriesRecallConfig : NSObject
+ (double)mainStickerOffsetY;
+ (double)mainStickerFontSize;
+ (double)subStickerOffsetY;
+ (double)subStickerFontSize;
+ (int)stickerDuration;
+ (BOOL)memoriesRecallEnable;
+ (BOOL)AdvanceEditorEnable;
+ (int)maxScanResultUploadCount;
+ (int)themePlayCountExitThreshold;
+ (int)videoMinSlotCount;
+ (int)maxDisplayableThemeAssetsCount;
+ (id)privateTabTitle;
+ (int)assetUploadChunkSize;
+ (BOOL)playerThumbnailLargerStyle;
+ (BOOL)playerThumbnailBorderVisible;
+ (double)imageAssetScaleEnd;
+ (id)themeVideoConfig;
+ (BOOL)privateTabAlwaysShowEntrance;
+ (id)memoriesRecallAgreementLink;
+ (float)themeVideoSimilarityFilterThreshold;
+ (int)videoAssetFilterConditionMinDuration;
+ (int)videoAssetFilterConditionMaxDuration;
+ (int)fragmentDuration;
@end
