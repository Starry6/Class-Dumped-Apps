@interface AWETokamakImageExceedMonitor : AWETokamakImageMonitor
- (id)_targetSize:;
- (id)_generateShortViewPath:;
- (BOOL)shouldReportImageSizeExceed:targeViewSize:viewPath:;
- (id)_shortViewPathForView:;
- (void)receiveImageModel:;
- (id)initWithConfig:;
- (void).cxx_destruct;
@end
