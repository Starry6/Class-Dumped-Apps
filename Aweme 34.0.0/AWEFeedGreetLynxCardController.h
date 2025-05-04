@interface AWEFeedGreetLynxCardController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWESpecialCardDelegate> cardDelegate;
@property (nonatomic) <AWESpecialCardContextProtocol> cardContext;
@property (nonatomic) @? needFetchBlock;
@property (nonatomic) @? fetchCompletionBlock;
- (void)willRefresh;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (id)cardContext;
- (void)setCardContext:;
- (id)cardDelegate;
- (void)setCardDelegate:;
- (void)cardDidAppear:withAweme:;
- (id)resolvedConfigJsonString;
- (id)needFetchBlock;
- (void)fetchLynxGreetCardWithCompletion:;
- (void)insertLynxGreetCardWithModel:atIndex:completion:;
- (void)setNeedFetchBlock:;
- (id)fetchCompletionBlock;
- (void)setFetchCompletionBlock:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
