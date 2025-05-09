@interface AWEAwemeLongPressIMSectionController : AWEBaseListSectionController
@property (nonatomic) q selectedUserCount;
@property (nonatomic) NSMutableSet trackConsetutiveChatShowSet;
@property (nonatomic) BOOL didTrackShowReplyAuthor;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? buttonClickedTrackBlock;
@property (nonatomic) @? addDismissHandlerBlock;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)aAWEPadModuleAdapter;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (id)buttonClickedTrackBlock;
- (void)setButtonClickedTrackBlock:;
- (id)addDismissHandlerBlock;
- (void)setAddDismissHandlerBlock:;
- (id)trackConsetutiveChatShowSet;
- (void)setTrackConsetutiveChatShowSet:;
- (long long)selectedUserCount;
- (void)p_closeFriendMomentShareToUserWithModel:index:newShareState:;
- (void)p_sendMessageWithModel:enterFrom:;
- (void)p_memoriesPlayerShareLocalToUserWithModel:index:newShareState:;
- (void)updateShareStateForCellAtIndex:model:;
- (void)shareToUserWithModel:index:newShareState:;
- (BOOL)didTrackShowReplyAuthor;
- (void)setDidTrackShowReplyAuthor:;
- (void)setSelectedUserCount:;
- (void)p_closeFriendClickMoreFriends;
- (void)p_memoriesPlayerClickMoreFriends;
- (BOOL)canShowLongpressPopover;
- (Class)cellClass;
- (void).cxx_destruct;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (Class)footerViewClass;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;
@end
