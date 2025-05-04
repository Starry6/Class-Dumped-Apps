@interface AWEMateApplicationSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWESocialRelationObserver mateObserver;
@property (nonatomic) NSString headerTitle;
@property (nonatomic) @? didDeleteModelsBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateMateState:;
- (void)setMateObserver:;
- (id)mateObserver;
- (void)setDidDeleteModelsBlock:;
- (void)showPopOver:model:;
- (void)deleteNoticeModel:isFromLongPress:;
- (void)didSelectItemModel:;
- (void)trackFriendRequestCellShowWithModel:;
- (void)trackAddFriendBtnWithModel:;
- (id)didDeleteModelsBlock;
- (void)postDeleteNetWork:;
- (id)init;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void).cxx_destruct;
@end
