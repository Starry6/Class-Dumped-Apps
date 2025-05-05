@interface MOVStreamWriterStateRecording : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q writerStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)name;
- (void)activateWithContext:;
- (BOOL)canAppendData:;
- (id)prepareRecording:;
- (BOOL)canConfigure:;
- (BOOL)canWriteData:;
- (BOOL)stopWriterWhenFifosAreEmpty:;
- (BOOL)canFinishRecording:;
- (id)prepareFinished:;
- (id)finishRecording:;
- (id)forceFinishRecording:;
- (id)nextFinishStep:;
- (id)cancelRecording:;
- (id)finishedCancelRecording:;
- (id)criticalErrorOccurred:context:;
- (long long)writerStatus;
@end
