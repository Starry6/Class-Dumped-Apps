@interface AWEIMFeedContentComponent : AWEIMFlexComponent
@property (nonatomic) BOOL isFromSearchBrandAD;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q scene;
- (BOOL)isFromSearchBrandAD;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)cellWillDisplay:;
- (void)showFeedDetailWithParams:;
- (void)didClickAssistanceButton:;
- (void)trackEcomFeedCardMsgClick;
- (id)displayViewModel;
- (void)p_setupReadKVO;
- (void)didTapFeedCover:extraParams:;
- (void)p_addKVOForDigCount:;
- (void)p_addKVOForViewModel:;
- (void)setIsFromSearchBrandAD:;
- (void)searchBrandADTrackerWithLabel:;
- (void)p_configLoadingIfNeededWithShow:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
