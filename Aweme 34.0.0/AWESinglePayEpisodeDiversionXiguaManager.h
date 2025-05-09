@interface AWESinglePayEpisodeDiversionXiguaManager : NSObject
@property (nonatomic) <AWEHttpTask> httpTask;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWESinglePayEpisodeDiversionXiguaModel diversionModel;
@property (nonatomic) BOOL hasShownAlert;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) @? exitPageBlock;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)commonTrackParameters:;
- (void)setHttpTask:;
- (id)httpTask;
- (id)aAWEDiversionXiguaCommonAdapter;
- (id)coldLaunchPath;
- (void)currentPlayModelDidChange:;
- (BOOL)shouldShowDiversionAlertOnExit;
- (void)showDiversionAlertIfNeededOnExit;
- (void)showDiversionAlertIfNeededOnExitPay;
- (void)setExitPageBlock:;
- (id)diversionModel;
- (void)setDiversionModel:;
- (BOOL)hasShownAlert;
- (void)diversionModelDidUpdate:;
- (BOOL)shouldShowDiversionAlertInScene:;
- (id)currentConfigInScene:;
- (void)showDiversionAlertWithConfig:completion:;
- (id)exitPageBlock;
- (void)setHasShownAlert:;
- (BOOL)isXiguaInstalled;
- (id)trackParamsWithConfig:;
- (void)handleRouteToXigua:;
- (id)lvideoDetailUrl:;
- (id)coldLaunchUrl:;
- (void)traceZlinkWithSchema:config:;
- (void)diversionAlertDidClick:config:;
- (void)diversionAlertDidShow:;
- (id)xiguaSchemaHost;
- (id)commonRouteParams:;
- (id)zlinkUrlString:;
- (id)lvideoDetailPath;
- (id)lvideoDetailCommonRouteParams:;
- (id)lvideoDetailPresentVIPParams:;
- (id)zlink;
- (id)trackStringOfScene:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
+ (Class)aAWEDiversionXiguaCommonAdapterClass;
+ (BOOL)frequencyEnable;
+ (BOOL)enableInScene:;
+ (BOOL)continuousShowFrequencyEnable;
+ (BOOL)continuousCloseFrequencyEnable;
+ (long long)daySince1970:;
+ (id)storage;
+ (id)config;
@end
