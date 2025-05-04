@interface AWENearbySkylightLynxHandler : NSObject
@property (nonatomic) NSMutableArray subscribeList;
@property (nonatomic) q pageType;
@property (nonatomic) <AWENearbySkyLightElementViewActionDelegate> delegate;
- (id)subscribeList;
- (void)setSubscribeList:;
- (void)unregisterSubscriber;
- (id)initWithPageType:;
- (void)registerSubscribes;
- (void)__registerOnNearbyFeedParamsUpdate;
- (void)__registerOnCapsuleTextUpdate;
- (void)__registerOnTagPanelOpenOrClose;
- (void)__registerShowOrderBubble;
- (void)__registerLifeServiceIconLayoutInfo;
- (void)__registerDidTransformerCardShow;
- (void)__registerOpenHalfScreenDialog;
- (void)__registerLynxTransformerEvent;
- (void)__registerLynxOrderP1ayEvent;
- (void)__registerTransformerSwitchBtn;
- (void)__registerNearbyClickSwitchBtn;
- (void)__registerNearbySwitchBtnDidAppear;
- (void)__registerNearbyMoveChannelGuideBannerShow;
- (id)delegate;
- (void)setPageType:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)pageType;
+ (void)publishEventResetSelectedTags;
@end
