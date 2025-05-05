@interface CSJRenderReport : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL hasReport;
@property (nonatomic) q errorCode;
@property (nonatomic) CSJAdInfoViewModel infoViewModel;
@property (nonatomic) q renderType;
@property (nonatomic) BOOL showBackup;
- (void)beginLoadWebView;
- (void)closeCoverView;
- (id)infoViewModel;
- (void)loadWebViewError:;
- (void)loadWebViewSuccess;
- (long long)renderType;
- (void)setHasReport:;
- (void)setInfoViewModel:;
- (void)setShowBackup:;
- (BOOL)showBackup;
- (long long)errorCode;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void)setRenderType:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (BOOL)hasReport;
- (void)report:;
@end
