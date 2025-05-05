@interface BDAlbumPrivacyCertEntry : BDPrivacyCertEntry
+ (id)creationRequestForAssetFromImage:cert:error:;
+ (id)creationRequestForAssetFromImageAtFileURL:cert:error:;
+ (id)creationRequestForAssetFromVideoAtFileURL:cert:error:;
+ (id)creationRequestForAssetWithCert:error:;
+ (id)defaultManagerWithCert:error:;
+ (id)fetchAssetCollectionsWithType:subtype:options:cert:error:;
+ (id)fetchAssetsInAssetCollection:options:cert:error:;
+ (id)fetchAssetsWithLocalIdentifiers:options:cert:error:;
+ (id)fetchAssetsWithMediaType:options:cert:error:;
+ (id)fetchAssetsWithOptions:cert:error:;
+ (id)fetchTopLevelUserCollectionsWithOptions:cert:error:;
+ (id)initImagePickerControllerWithCert:error:;
+ (id)initPHPickerViewControllerWithConfig:withCert:error:;
+ (void)performChanges:cert:completionHandler:;
+ (void)performChangesAndWait:cert:error:;
+ (void)registerChangeObserver:cert:error:;
+ (int)requestAVAssetForVideo:options:resultHandler:manager:cert:error:;
+ (void)requestAuthorizationForAccessLevel:withCert:completionHandler:;
+ (void)requestAuthorizationWithCert:completionHandler:;
+ (void)requestAuthorizationWithCert:completionHandler:forAccessLevel:;
+ (int)requestImageDataAndOrientationForAsset:options:resultHandler:manager:cert:error:;
+ (int)requestImageDataForAsset:options:resultHandler:manager:cert:error:;
+ (int)requestImageForAsset:targetSize:contentMode:options:resultHandler:manager:cert:error:;
+ (int)requestLivePhotoForAsset:targetSize:contentMode:options:resultHandler:manager:cert:error:;
@end
