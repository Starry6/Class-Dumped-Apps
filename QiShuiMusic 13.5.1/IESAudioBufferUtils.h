@interface IESAudioBufferUtils : NSObject
+ (id)VEAudioBufferListCreate:numberFrames:;
+ (void)VEAudioBufferListFree:;
+ (void)convertAudioBuffer:srcBufferList:resBufferList:targetAsbd:srcAsbd:isFullCache:;
+ (void)convertAudioBuffer:srcSampleBuffer:resBufferList:targetAsbd:srcAsbd:isFullCache:;
+ (void)convertFloatInterleaved:toNonInterleaved:numberOfFrames:;
+ (BOOL)convertNonInterleavedToInterleaved:numberOfFrames:;
+ (void)copyBufferList:srcBufferList:;
+ (void)copyBufferList:srcBufferList:byteSize:;
+ (void)createBufferQueue:;
+ (int)dequeue:dstData:dstOffset:outputSize:;
+ (int)dequeue:dstData:outputSize:;
+ (void)freeBufferQueue:;
+ (id)generateSilence:asbd:;
+ (BOOL)isFullBufferQuene:dataSize:;
+ (BOOL)pushQueue:srcData:dataSize:;
+ (BOOL)reCreateBuffer:currLength:needLength:;
+ (void)resetAudioBufferList:;
+ (void)resetBufferQueue:;
+ (id)sampleBufferFromAudioBuffer:asbd:timingInfo:inNumberFrames:;
@end
