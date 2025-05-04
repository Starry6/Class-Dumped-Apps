@interface AWEFeedRVCardVideoControlContext : AWEPageContext
@property (nonatomic) Q scene;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> interactionContext;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) <AWEAwemeBizPlayVideoProtocol><AWEAwemePlayVideoViewControllerProtocol> videoDelegate;
@property (nonatomic) BOOL isActivationMode;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString recommendRank;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setIsActivationMode:;
- (BOOL)isActivationMode;
- (id)recommendRank;
- (void)setRecommendRank:;
- (void)setModel:;
- (void)setScene:;
- (unsigned long long)scene;
- (id)model;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)interactionContext;
- (void)setInteractionContext:;
- (void)setVideoDelegate:;
- (id)videoDelegate;
@end
