@interface AWEMediaDownloadWatermarkStage : AWEMediaDownloadBaseStage
- (long long)progressUnitCount;
- (void)addImageWatermark;
- (void)addWaterMark;
- (void)handleWatermarkCompleteWithFileURL:error:;
- (void)addWaterMarkImpl;
- (long long)watermarkExporterOptions;
- (void)run;
- (void)_run;
- (void)cancel;
- (void)appDidBecomeActive:;
- (BOOL)shouldRun;
- (void)handleProgress:;
@end
