@interface VCPHomeKitAnalysisService : NSObject
- (void)cancelRequest:;
- (void)cancelAllRequests;
- (id)init;
- (id)connection;
- (void)reportProgress:forRequest:;
- (void).cxx_destruct;
- (int)requestAnalysis:ofAssetData:withProperties:progressHandler:andCompletionHandler:;
- (int)requestAnalysis:ofAssetSurface:withProperties:progressHandler:andCompletionHandler:;
- (int)requestIdentificationForFaceCrop:withOptions:andCompletionHandler:;
- (int)requestResidentMaintenanceWithOptions:andCompletionHandler:;
+ (id)analysisService;
@end
