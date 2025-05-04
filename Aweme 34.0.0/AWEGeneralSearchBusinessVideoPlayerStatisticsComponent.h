@interface AWEGeneralSearchBusinessVideoPlayerStatisticsComponent : AWESearchComponent
@property (nonatomic) AWEGeneralSearchVideoCardModel cardModel;
@property (nonatomic) AWESearchStandardVideoPlayerComponentModel playerModel;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardModel;
- (void)setPlayerModel:;
- (id)playerModel;
- (void)setCardModel:;
- (void)updateWithModel:forceUpdate:;
- (void)componentViewDidStartShowing;
- (id)anchorProvider;
- (id)p_getVideoCardBtmDcmInfoDict;
- (id)p_context;
- (void)trackSearchVideoShow;
- (id)p_componentContext;
- (void).cxx_destruct;
@end
