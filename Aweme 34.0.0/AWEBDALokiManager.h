@interface AWEBDALokiManager : BDALokiManager
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) @? lokiCardStatus;
@property (nonatomic) @? clickFromOpenAdPageBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (id)initWithAweme:container:lokiDatas:;
- (void)setCustomLynxBridges:;
- (id)initWithAweme:container:;
- (id)lokiCardStatus;
- (void)setLokiCardStatus:;
- (id)clickFromOpenAdPageBlock;
- (id)createLokiComponentWithContainer:lokiModel:;
- (void)setClickFromOpenAdPageBlock:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
@end
