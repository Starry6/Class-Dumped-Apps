@interface IESLiveSaaSAudienceListViewModel : NSObject
@property (nonatomic) RACCommand updater;
@property (nonatomic) q rankType;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSAudienceListModel listModel;
@property (nonatomic) Q index;
- (long long)audienceListCount;
- (long long)beastListCount;
- (id)combinedListFooterTitle;
- (id)combinedListTitle;
- (void)doUpdate;
- (id)rankDesc;
- (id)roomModel;
- (void)setListModel:;
- (void)setRoomModel:;
- (void)setRankType:;
- (id)updater;
- (unsigned long long)index;
- (id)listModel;
- (id)title;
- (void)setIndex:;
- (void).cxx_destruct;
- (long long)rankType;
- (void)setUpdater:;
- (id)footerContent;
@end
