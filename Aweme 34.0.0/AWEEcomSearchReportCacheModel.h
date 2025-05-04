@interface AWEEcomSearchReportCacheModel : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL receivedData;
@property (nonatomic) BOOL viewDidAppear;
@property (nonatomic) double beginTime;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (BOOL)receivedData;
- (void)setSuccess:;
- (double)beginTime;
- (void)setBeginTime:;
- (void)setReceivedData:;
- (void).cxx_destruct;
- (BOOL)viewDidAppear;
- (BOOL)success;
- (void)setViewDidAppear:;
@end
