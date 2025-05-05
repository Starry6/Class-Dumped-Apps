@interface LSLiveAudioBufferUtils : NSObject
+ (void)freeBufferList:;
+ (void)mixAudioBufferListWithVolume:srcVolume:dstBufferList:dstVolume:;
+ (void)copyBufferList:srcBufferList:;
+ (id)createBufferList:frameCount:;
+ (void)createBufferQueue:;
+ (int)dequeue:dstData:outputSize:;
+ (void)freeBufferQueue:;
+ (void)mixAudioBuffer:srcDataSize:srcVolume:dstBuffer:dstDataSize:dstVolume:;
+ (void)mixAudioBufferList:dstBufferList:;
+ (void)mixAudioDataWithVolume:srcLength:srcVolume:dstData:dstLength:dstVolume:;
+ (void)pushQueue:srcData:dataSize:;
+ (void)resetAudioBufferList:;
+ (void)resetBufferQueue:;
+ (void)writePCMFile:pcmData:length:;
@end
