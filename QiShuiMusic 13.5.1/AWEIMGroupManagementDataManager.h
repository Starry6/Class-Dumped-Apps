@interface AWEIMGroupManagementDataManager : NSObject
@property (nonatomic) NSArray cellModelList;
@property (nonatomic) NSString liveAutoSyncDescription;
@property (nonatomic) NSString workAutoSyncDescription;
- (id)cellModelList;
- (void)constructListWithConversation:setting:;
- (void)fetchGroupUpgradeSettingWithConversation:completion:;
- (id)liveAutoSyncDescription;
- (void)setCellModelList:;
- (void)setLiveAutoSyncDescription:;
- (void)setWorkAutoSyncDescription:;
- (void)updateDataWithConversation:;
- (void)updateGroupManagementWithConversation:type:updateValue:completion:;
- (id)workAutoSyncDescription;
- (void).cxx_destruct;
+ (id)autoSyncLiveMessageDescFromLive;
+ (id)__str2Map:;
+ (id)autoSyncFakeNoticeMessageDataForNewGroup;
+ (id)autoSyncFakeNoticeMessageDataForOldGroup;
+ (id)autoSyncFeedVideoMessageDesc;
+ (id)autoSyncFeedVideoMessageDescFromLive;
+ (id)autoSyncFeedVideoMessageTitle;
+ (id)autoSyncLiveMessageDesc;
+ (id)autoSyncLiveMessageTitle;
+ (void)fetchGroupSettingEntryLimitWithConversation:completion:;
+ (void)fetchGroupUpgradeSettingConversionID:completion:;
@end
