@interface AWEIMMessageListLiveGroupAnnouncementEntryComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (void)didClickLiveGroupAnnouncement;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)didClickLiveGroupAnnouncementWithEnterFrom:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
