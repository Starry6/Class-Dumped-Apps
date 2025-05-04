@interface AWEMediaDownloadCommentWatermarkStage : AWEMediaDownloadWatermarkStage
@property (nonatomic) NSError error;
@property (nonatomic) NSObject<OS_dispatch_group> dispatchGroup;
- (void)finishThenContinue;
- (void)failedThenContinueWithError:;
- (void)addLivePhotoWatermark;
- (void)addImageWatermark;
- (void)handleWatermarkCompleteWithFileURL:error:;
- (void)run;
- (void)setError:;
- (void)_run;
- (id)dispatchGroup;
- (void).cxx_destruct;
- (id)error;
- (void)setDispatchGroup:;
- (BOOL)shouldRun;
@end
