@interface LSLiveAudioCleaner : NSObject
- (void)createBufferQueue:;
- (int)dequeue:dstData:outputSize:;
- (void)freeBufferQueue:;
- (BOOL)process:andInput:andLen:andSamplePerChannel:;
- (BOOL)processBufferList:;
- (void)pushQueue:srcData:dataSize:;
- (void)resetBufferQueue:;
- (void)updateFormat:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)initWithSampleRate:;
@end
