@interface AWEIMRecommendGroupModuleService : HTSService
@property (nonatomic) AWEIMRecommendGroupRequestService requestService;
@property (nonatomic) AWEIMMessageTabRecommendGroupCache cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)beginAsyncLoadRecommendSchoolGroups;
- (id)performRecommendChatClickWithIdentifier:;
- (void)removeRecommendGroupChatWithIdentifier:onlyLocal:needReloadData:;
- (id)updateRecommendGroupWithIdentifier:status:;
- (BOOL)__recommendGroupAbilityIsEnable;
- (id)__fetchRecommendItemsFromRemoteIfNeededWithCache:;
- (id)__recommendChatWithIdentifier:;
- (id)__updateRecommendChatStatus:chat:;
- (void)__removeRecommendGroupChatModelDataSource:needReloadData:;
- (void)__removeRecommendGroupChatModel:needReloadData:;
- (id)__routerToJoinGroupViewController:;
- (void)__handleShowCreateGroupPanelWithIdentifier:chat:;
- (id)requestService;
- (void)__updateRecommendGroupChatModel:callDelegate:;
- (void)setRequestService:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
@end
