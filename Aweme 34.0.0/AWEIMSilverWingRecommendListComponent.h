@interface AWEIMSilverWingRecommendListComponent : AWEIMFlexComponent
@property (nonatomic) BOOL hasTrack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_addObserver;
- (void)setHasTrack:;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)tapAcceptViewWithGesture:;
- (void)didInsertTopicCard;
- (void)p_acceptAgreement:;
- (void)p_renderRecommendListWithMessage:;
- (BOOL)canRenderRecommendList;
- (void)reloadRecommendList;
- (void)p_hasClickRecommendWithModel:;
- (id)hasEmojis:;
- (void)p_trackRecommendListWithEvent:model:;
- (void)p_trackFormatRecommendListShowEvent:;
- (BOOL)hasTrack;
+ (BOOL)canCreateComponentWithContext:;
@end
