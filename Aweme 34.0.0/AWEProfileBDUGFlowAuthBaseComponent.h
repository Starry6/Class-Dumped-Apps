@interface AWEProfileBDUGFlowAuthBaseComponent : AWEProfileBaseComponent
@property (nonatomic) BOOL hasAppearedOnce;
@property (nonatomic) BDUGFlowAuthToken authToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (void)bindBDUGFlowAuthToken:;
- (void)leaveForTokenWithCertID:;
- (void)setAuthToken:;
- (id)authToken;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setHasAppearedOnce:;
- (void).cxx_destruct;
- (BOOL)hasAppearedOnce;
- (void)viewDidAppear;
@end
