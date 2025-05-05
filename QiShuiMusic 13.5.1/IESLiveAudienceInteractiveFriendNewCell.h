@interface IESLiveAudienceInteractiveFriendNewCell : UITableViewCell
@property (nonatomic) IESLiveAudienceInteractiveAnchorInviteFriendHorizontalView listView;
- (void)updateWithUserList:clickUserBlock:clickMoreBlock:userCellDidShowBlock:moreCellDidShowBlock:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setListView:;
- (id)listView;
- (void).cxx_destruct;
- (void)setupUI;
@end
