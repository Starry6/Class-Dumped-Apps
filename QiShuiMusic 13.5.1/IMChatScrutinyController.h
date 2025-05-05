@interface IMChatScrutinyController : NSObject
- (void)markMessageAsCorrupt:;
- (void)markMessageAsNotCorrupt:;
- (double)_maxDurationForScrutinyMode;
- (id)transcriptRenderingMetadataForChatIdentifier:;
- (id)scrutinyInfo;
- (void)setTranscriptRenderingMetadata:forChatIdentifier:;
+ (id)sharedController;
@end
