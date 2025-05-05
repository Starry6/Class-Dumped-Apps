@interface PLVideoTranscoder : NSObject
+ (void)transcodeVideo:outputURL:presetName:outputFileType:metadata:completionHandler:;
+ (void)transcodeVideoWithObjectBuilder:outputURL:startTime:endTime:presetName:outputFileType:metadata:completionHandler:;
+ (id)generatePosterFrameForVideoAtURL:maxSize:error:;
+ (id)generatePosterFrameForAVAsset:maxSize:error:;
@end
