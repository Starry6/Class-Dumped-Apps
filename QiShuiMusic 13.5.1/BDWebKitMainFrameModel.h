@interface BDWebKitMainFrameModel : NSObject
@property (nonatomic) BOOL loadFinishWithLocalData;
@property (nonatomic) NSString latestWebViewURLString;
@property (nonatomic) Q mainFrameStatus;
@property (nonatomic) NSDictionary mainFrameStatModel;
@property (nonatomic) NSMutableDictionary mainFramePerformanceTimingModel;
- (id)mainFramePerformanceTimingModel;
- (unsigned long long)mainFrameStatus;
- (id)latestWebViewURLString;
- (BOOL)loadFinishWithLocalData;
- (id)mainFrameStatModel;
- (void)setLatestWebViewURLString:;
- (void)setLoadFinishWithLocalData:;
- (void)setMainFramePerformanceTimingModel:;
- (void)setMainFrameStatModel:;
- (void)setMainFrameStatus:;
- (void).cxx_destruct;
@end
