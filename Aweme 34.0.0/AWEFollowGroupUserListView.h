@interface AWEFollowGroupUserListView : UIView
@property (nonatomic) BOOL showAddButton;
@property (nonatomic) q maxCount;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) AWEFollowGroupAddMemberView addView;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)trackParams;
- (void)setTrackParams:;
- (id)addView;
- (void)__setupView;
- (void)setAddView:;
- (void)configWithUserList:memberCount:;
- (void)setMaxCount:;
- (void)setGroupID:;
- (void)setGroupName:;
- (long long)maxCount;
- (id)groupID;
- (id)initWithFrame:;
- (id)initWithMaxCount:;
- (id)groupName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)previousPage;
- (void)setPreviousPage:;
- (void)setShowAddButton:;
- (BOOL)showAddButton;
@end
