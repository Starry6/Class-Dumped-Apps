@interface IESLiveSaaSRetainConsultStore : NSObject
@property (nonatomic) IESLiveSaaSBannerApi api;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
- (id)appendParamsWithOriginalUrl:;
- (id)componentContext;
- (void)fetchRetainConsultWithCompletion:;
- (id)initWithComponentContext:room:;
- (void)setComponentContext:;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
