@interface AWEProviderManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPageContext pageContext;
@property (nonatomic) AWETemplateBarContext barContext;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) Q scene;
@property (nonatomic) # providerRegister;
@property (nonatomic) NSMutableArray providers;
@property (nonatomic) <AWEViewProviderProtocol><AWEBarLifeCycleProtocol> currentProvider;
@property (nonatomic) <AWEProviderManagerDelegate> delegate;
@property (nonatomic) NSArray objcs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)viewDidChangeBreakPoint;
- (void)setBarContext:;
- (id)barContext;
- (id)objcs;
- (void)setProviderRegister:;
- (void)registProvidersForRefactor;
- (void)registProviders;
- (id)currentProvider;
- (void)setCurrentProvider:;
- (void)viewController_viewWillDisplay;
- (Class)providerRegister;
- (id)initWithScene:providerRegister:;
- (void)updateWithData:context:extraInfo:;
- (id)initWithData:scene:providerRegister:context:;
- (void)setModel:;
- (id)providers;
- (void)setScene:;
- (id)delegate;
- (unsigned long long)scene;
- (void)setProviders:;
- (id)model;
- (void).cxx_destruct;
- (void)removeObject:;
- (void)reset;
- (void)updateWithData:;
- (void)addObject:;
- (void)setDelegate:;
- (void)setPageContext:;
- (id)pageContext;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (unsigned long long)shouldActiveWithData:scene:registerClass:context:;
+ (unsigned long long)shouldActiveWithData:scene:registerClass:context:extraInfo:;
@end
