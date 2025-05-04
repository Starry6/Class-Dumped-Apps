@interface AWEAIGCBusinessTrackHelper : NSObject
+ (void)trackAsyncPostTaskPerformanceWithAIGCType:serverTaskID:eventType:duration:effectID:errorCode:errorMsg:;
+ (void)trackToolsAIGCCorePreProcess:assetsCount:isSucceeded:errorCode:duration:aigcMediaEnum:aigcType:isMultiLora:multiLoraProfileNum:fromPanel:;
+ (void)trackToolsAIGCCoreAIProcess:serverTaskId:scene:isSucceeded:errorCode:duration:aigcMediaEnum:isAsync:needGenerateSticker:aigcType:isMultiLora:multiLoraProfileNum:processType:referenceImageCount:;
+ (void)trackToolsAIGCCorePostProcess:serverTaskId:assetsCount:duration:aigcMediaEnum:aigcType:isMultiLora:multiLoraProfileNum:;
+ (void)trackSyncPerformanceWithAIGCType:serverTaskID:eventType:duration:serverIsAsync:effectID:keywords:errorCode:errorMsg:;
+ (void)trackToolsAIGCCoreAIProcessNetAll:serverTaskId:assetsCount:scene:isMultiLora:multiLoraProfileNum:isSucceeded:errorCode:duration:aigcMediaEnum:isAsync:needGenerateSticker:aigcType:referenceImageCount:;
+ (void)trackToolsAIGCQueryTaskResultWithStatus:errorCode:duration:errorMessage:taskID:serverTaskID:scene:isMultiLora:multiLoraProfileNum:queryType:isAsync:;
+ (void)monitorGenerateAllTimeConsumingPropId:AIGCType:needGenerateSticker:isSyncGenerate:duration:statusCode:errorCode:errorMessage:extraParam:;
+ (void)trackToolsAIGCCorePicDownloadUrl:serverTaskId:assetsCount:scene:isMultiLora:multiLoraProfileNum:isSucceeded:errorMsg:duration:errorCode:;
+ (void)trackToolsAIGCCoreAIProcessReview:serverTaskId:scene:isMultiLora:multiLoraProfileNum:isSucceeded:errorMsg:duration:errorCode:referenceImageCount:;
+ (void)monitorDownloadStickerpropId:AIType:duration:statusCode:errorCode:errorMessage:extraParam:;
+ (void)trackToolsAIGCCoreUploadTOS:assetsCount:resultCount:resultHasEmptyPath:scene:isSucceeded:errorMsg:errorCode:duration:authKeyDuration:uploadDuration:aigcMediaEnum:isAsync:needGenerateSticker:aigcType:referenceImageCount:;
+ (void)monitorGenerateInterfacePropId:AIGCType:needGenerateSticker:isSyncGenerate:duration:statusCode:errorCode:errorMessage:extraParam:;
+ (void)monitorDownloadFileWithTaskId:propId:AIType:actionType:totalDuration:duration:statusCode:errorCode:errorMessage:extraParam:;
+ (void)trackToolsAIGCCoreAIProcessAll:serverTaskId:assetsCount:isSucceeded:errorCode:duration:aigcMediaEnum:aigcType:isMultiLora:multiLoraProfileNum:isAsync:exitMethod:referenceImageCount:;
+ (id)eventTypeString:;
@end
