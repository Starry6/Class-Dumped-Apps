@interface SIMovWriter : NSObject
- (void)dealloc;
- (void)startRecording;
- (void).cxx_destruct;
- (void)finishRecording;
- (id)initWriterWithVideoURL:frameSize:;
- (void)writeFrame:andTime:;
@end
