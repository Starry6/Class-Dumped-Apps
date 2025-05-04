@interface AWEIMAImojiUtils : NSObject
+ (void)createImageIfPossibleWithKeyword:emoticonModel:textStrokeColor:textColor:completion:;
+ (id)uploadImageData:scene:completion:;
+ (id)transformToThemeModelWithPackage:;
+ (id)emoticonModelFromDictionary:;
+ (id)dictionaryFromEmoticonModel:;
+ (id)aigcStickerBatchCreateWithArtID:stickers:completion:;
+ (id)aigcFaceImageUploadWithParams:completion:;
+ (id)aigcStickerGetWithArtID:taskIDs:completion:;
+ (id)imageWithImage:text:textStrokeColor:textColor:;
+ (id)aigcDirtyWordCheckWithKeyword:completion:;
+ (id)transformToInfoModelWithPackage:;
@end
