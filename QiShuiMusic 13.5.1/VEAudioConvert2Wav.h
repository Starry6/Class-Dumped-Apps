@interface VEAudioConvert2Wav : NSObject
- (void)convertAudioAsync:outputURL:completeCallback:;
- (BOOL)convertAudioSync:outputURL:completeCallback:;
- (id)init;
@end
