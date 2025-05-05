@interface PLAssetsdResourceClient : PLAssetsdBaseClient
- (void)addGroupWithName:completionHandler:;
- (BOOL)fileDescriptorForAssetURL:withAdjustments:fileExtension:fileDescriptor:error:;
- (void)downloadCloudSharedAsset:withCloudPlaceholderKind:shouldPrioritize:shouldExtendTimer:completionHandler:;
- (BOOL)estimatedOutputFileLengthForVideoURL:fallbackFilePath:exportPreset:exportProperties:outFileLength:error:;
- (BOOL)updateInternalResourcePath:objectURI:error:;
- (void)addAssetWithURL:toAlbumWithUUID:completionHandler:;
- (BOOL)fileURLForAssetURL:withAdjustments:fileURL:error:;
- (void)adjustmentDataForAsset:networkAccessAllowed:trackCPLDownload:completionHandler:;
- (BOOL)imageDataForAsset:format:allowPlaceholder:wantURLOnly:networkAccessAllowed:trackCPLDownload:outImageData:outImageDataInfo:outCPLDownloadContext:error:;
- (BOOL)sandboxExtensionsForAssetWithUUID:sandboxExtensionTokens:error:;
- (BOOL)sandboxExtensionForFileSystemBookmark:bookmarkURL:sandboxExtensionToken:error:;
- (void)imageDataForAsset:format:allowPlaceholder:wantURLOnly:networkAccessAllowed:trackCPLDownload:completionHandler:;
- (id)consolidateAssets:completionHandler:;
- (id)projectExtensionDataForProjectUuid:;
- (void)saveAssetWithJobDictionary:imageSurface:previewImageSurface:completionHandler:;
@end
