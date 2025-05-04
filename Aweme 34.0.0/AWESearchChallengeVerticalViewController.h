@interface AWESearchChallengeVerticalViewController : AWESearchResultVerticalBaseViewController
@property (nonatomic) NSMutableArray displayIDs;
@property (nonatomic) AWESearchChallengeVerticalCardView challengeCardView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterFrom;
- (void)trackShow;
- (void)customComponentDidFinishRender:withViewModel:;
- (BOOL)customPageEnableAsyncProcess;
- (BOOL)shouldOpenNetworkSep;
- (void)setDisplayIDs:;
- (void)cardViewWillDisplay:;
- (void)setChallengeCardView:;
- (id)challengeCardView;
- (void)viewWillDisappear:;
- (void)addObserver;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (id)displayIDs;
+ (long long)preRenderBeforeNum;
+ (long long)preRenderAfterNum;
@end
