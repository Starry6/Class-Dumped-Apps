@interface AWEIMPrivateChatManagementHelperViewModel : AWEIMChatListControllerViewModel
@property (nonatomic) AWEIMPrivateChatManagementViewModel chatViewModel;
@property (nonatomic) AWEIMPrivateChatManagementConfigModel configModel;
@property (nonatomic) NSArray toolList;
@property (nonatomic) NSArray moduleIndexList;
@property (nonatomic) NSMutableSet chatCellShownSet;
- (id)configModel;
- (void)setConfigModel:;
- (id)chatViewModel;
- (id)moduleIndexList;
- (id)toolList;
- (void)trackClickChatManageDetailEvent;
- (void)trackChatCellShowEventWithChat:index:cell:;
- (void)trackEnterChatEventWithChat:;
- (void)__fetchConfigData;
- (id)__modifyToolListUseConfigCache;
- (id)__modifyToolListWithModel:;
- (void)__saveConfigCacheWithToolList:;
- (void)__generateModuleIndexListWithModuleTypeToolExist:;
- (void)setToolList:;
- (void)setModuleIndexList:;
- (id)chatCellShownSet;
- (void)setChatViewModel:;
- (void)setChatCellShownSet:;
- (void)fetchData;
- (id)init;
- (void).cxx_destruct;
@end
