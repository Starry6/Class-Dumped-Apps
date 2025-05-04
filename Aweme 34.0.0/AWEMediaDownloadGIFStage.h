@interface AWEMediaDownloadGIFStage : AWEMediaDownloadBaseStage
- (long long)progressUnitCount;
- (void)convertVideoToGIF;
- (void)run;
- (void)handleProgress:;
@end
