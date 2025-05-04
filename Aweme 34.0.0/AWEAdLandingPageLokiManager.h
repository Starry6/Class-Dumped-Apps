@interface AWEAdLandingPageLokiManager : NSObject
@property (nonatomic) AWEBDALokiManager adLokiManager;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)sendEvent:params:callback:;
- (id)configLokiData:;
- (void)lokiStartLoad:;
- (void)lokiComponentDowngrade:errorMsg:;
- (void)lokiRenderFinishComponent:;
- (void)lokiClose:;
- (id)getLynxGlobalProps:;
- (void)setupLokiWithAweme:globalProps:container:url:;
- (id)adLokiManager;
- (void)setAdLokiManager:;
- (void).cxx_destruct;
- (void)reset;
@end
