@interface ARScreenRecording : NSObject
@property (nonatomic) RPScreenRecorder recorder;
@property (nonatomic) BOOL saveInPhotosLibrary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
- (void)video:didFinishSavingWithError:contextInfo:;
- (void)screenRecorderDidChangeAvailability:;
- (void)startRecordingWithHandler:;
- (void)stopRecordingWithHandler:;
- (void)removeTemporaryOutputFile;
- (BOOL)saveInPhotosLibrary;
- (void)setSaveInPhotosLibrary:;
@end
