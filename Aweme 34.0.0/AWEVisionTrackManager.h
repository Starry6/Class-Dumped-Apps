@interface AWEVisionTrackManager : NSObject
+ (void)trackQrCodeScanEnterWithGlobalDataModel:;
+ (void)trackQrCodeScanEnterVisualWithGlobalDataModel:;
+ (void)trackCameraPerformanceWithGlobalDataModel:performanceTool:;
+ (void)trackExitRecordPageWithType:isQrCode:globalDataModel:;
+ (void)trackClickRecordRealityWithGlobalDataModel:;
+ (void)trackClickAlbumEntranceWithGlobalDataModel:;
+ (void)trackEnterScanHistoryPageWithGlobalDataModel:;
+ (void)trackClickFlashLightIsPermanent:globalDataModel:;
+ (void)trackQrCodeIdentifyWithCodeNum:enterMethod:globalDataModel:;
+ (void)trackChooseUploadContentWithGlobalDataModel:;
+ (void)trackEnterAlbumPageWithGlobalDataModel:;
@end
