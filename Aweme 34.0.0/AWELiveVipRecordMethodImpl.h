@interface AWELiveVipRecordMethodImpl : AWELiveVipRecordMethod
@property (nonatomic) AWELiveVipAudioRecorder recorder;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callWithParamModel:completionHandler:;
- (void)audioRecorderStartRecord:error:;
- (void)audioRecorderDidFinishRecording:success:error:;
- (id)getFileURL;
- (void)startRecordWithCompletionHandler:;
- (void)cancelRecordWithCompletionHandler:;
- (void)stopRecordWithCompletionHandler:;
- (void)setIsCanceled:;
- (BOOL)isRecording;
- (BOOL)isCanceled;
- (id)completion;
- (void)setCompletion:;
- (void)setIsRecording:;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
@end
