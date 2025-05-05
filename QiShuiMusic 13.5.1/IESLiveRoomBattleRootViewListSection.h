@interface IESLiveRoomBattleRootViewListSection : IESLiveRoomBattleRootViewSection
@property (nonatomic) q inviteSource;
- (double)cellHeightAtIndex:;
- (id)headerForTableView:;
- (long long)inviteSource;
- (void)setInviteSource:;
- (void)willDisplyCell:atIndex:;
- (Class)cellClass;
- (id)sectionName;
- (double)heightForHeader;
@end
