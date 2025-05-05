@interface HTSLiveUserPreviewFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveUserCardViewModel userCardViewModel;
@property (nonatomic) NSObject<IESLiveMoreToolsSettingItemAdapter> userRelationSwitchItem;
@property (nonatomic) BOOL abTest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (BOOL)abTest;
- (void)addAudienceUserRelationMoreToolsSettingItem:;
- (void)addUserCardPSActionSheetItem;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)hideSmallWindow:;
- (void)removeAudienceUserRelationMoreToolsSettingItem;
- (void)setAbTest:;
- (void)setUserCardViewModel:;
- (void)setUserRelationSwitchItem:;
- (void)setupAudienceUserRelationSwitchItem:;
- (id)userCardViewModel;
- (id)userRelationSwitchItem;
- (void)userSettingInfoFetched:error:;
- (void).cxx_destruct;
- (void)addObservers;
@end
