@interface IESLiveMultiBattlePrepareUsersViewConfig : NSObject
@property (nonatomic) NSMutableArray oppositeTeamUsers;
@property (nonatomic) BOOL disableGenderDisplay;
- (BOOL)disableGenderDisplay;
- (id)oppositeTeamUsers;
- (id)p_getLinkerModelWithUser:showSelected:alignPosition:showChangeBtn:;
- (void)setDisableGenderDisplay:;
- (void)setOppositeTeamUsers:;
- (id)setupPersonalLinkers:;
- (id)setupTeamLinkers:modeInfo:isSelfLayoutLast:isSelfTeamLayoutRight:;
- (void).cxx_destruct;
@end
