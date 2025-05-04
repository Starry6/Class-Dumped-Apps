@interface AWEMediaDownloadLivePhotoStage : AWEMediaDownloadBaseStage
- (long long)progressUnitCount;
- (void)convertVideoToLivePhoto;
- (void)handleCompleteWithVideoURL:imageURL:error:;
- (void)run;
- (BOOL)shouldRun;
- (void)handleProgress:;
@end
