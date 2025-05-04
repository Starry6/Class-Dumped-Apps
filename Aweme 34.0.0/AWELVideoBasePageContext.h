@interface AWELVideoBasePageContext : AWEPageContext
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString fromPage;
@property (nonatomic) UIViewController container;
@property (nonatomic) BOOL isOnFeedSharePanel;
@property (nonatomic) NSString homepageType;
@property (nonatomic) NSDictionary trackCommonParams;
- (void)setEnterFrom:;
- (void)setFromPage:;
- (id)enterFrom;
- (void)setTrackCommonParams:;
- (id)trackCommonParams;
- (BOOL)isOnFeedSharePanel;
- (void)setIsOnFeedSharePanel:;
- (id)homepageType;
- (void)setHomepageType:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (id)fromPage;
@end
