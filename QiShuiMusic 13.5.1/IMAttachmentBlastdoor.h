@interface IMAttachmentBlastdoor : NSObject
+ (id)logger;
+ (id)blastdoorInterface;
+ (BOOL)supportsFeature:;
+ (void)generateAnimatedImagePreview:maxPixelDimension:index:maxCount:withCompletionBlock:;
+ (void)getMetadataForAnimatedImage:maxCount:withCompletionBlock:;
+ (void)generatePreview:maxPxWidth:scale:withCompletionBlock:;
+ (void)sendData:forPreviewType:withCompletionBlock:;
+ (void)generateMoviePreview:maxPxWidth:minThumbnailPxSize:scale:withCompletionBlock:;
+ (void)sendBalloonPluginPayloadData:withBundleIdentifier:completionBlock:;
+ (void)generateAudioPreview:withCompletionBlock:;
+ (void)generateNickname:forRecordID:withKey:completionBlock:;
+ (void)generatePassPreview:withCompletionBlock:;
@end
