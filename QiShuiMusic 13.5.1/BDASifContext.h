@interface BDASifContext : NSObject
@property (nonatomic) BDASifConfiguration config;
@property (nonatomic) UIView<BDXWebViewProtocol> bdx_webview;
@property (nonatomic) BDASifAdInfoModel adModel;
@property (nonatomic) double proportion;
@property (nonatomic) double startTime;
- (void)setBdx_webview:;
- (id)adModel;
- (id)bdx_webview;
- (double)proportion;
- (void)setAdModel:;
- (void)setProportion:;
- (void)setConfig:;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (id)config;
@end
