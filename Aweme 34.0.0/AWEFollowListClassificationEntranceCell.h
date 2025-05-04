@interface AWEFollowListClassificationEntranceCell : UICollectionViewCell
@property (nonatomic) AWEFollowListClassificationEntrance entrance;
@property (nonatomic) AWEFollowListCategoryStatisticsModel categoryResponse;
@property (nonatomic) NSNumber categoryFollowingGroupCount;
@property (nonatomic) NSNumber cachedGroupCount;
@property (nonatomic) BOOL unreadNeedTotal;
@property (nonatomic) AWEFollowListPageContext pageContext;
- (id)aAWEPadModuleAdapter;
- (void)setEntrance:;
- (id)entrance;
- (BOOL)unreadNeedTotal;
- (void)setUnreadNeedTotal:;
- (void)setCategoryFollowingGroupCount:;
- (id)categoryFollowingGroupCount;
- (void)setCategoryResponse:;
- (void)setCachedGroupCount:;
- (id)categoryResponse;
- (id)cachedGroupCount;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPageContext:;
- (id)pageContext;
+ (Class)aAWEPadModuleAdapterClass;
@end
