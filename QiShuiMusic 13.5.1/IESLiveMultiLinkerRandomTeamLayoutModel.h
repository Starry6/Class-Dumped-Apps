@interface IESLiveMultiLinkerRandomTeamLayoutModel : NSObject
@property (nonatomic) BOOL needMockOppositeUser;
@property (nonatomic) NSMutableArray oppositeTeamLinkmicIdArray;
@property (nonatomic) NSMutableArray localSortedLinkmicIds;
@property (nonatomic) NSMutableSet ownTeamUserIds;
- (id)localSortedLinkmicIds;
- (BOOL)needMockOppositeUser;
- (id)oppositeTeamLinkmicIdArray;
- (id)ownTeamUserIds;
- (void)setLocalSortedLinkmicIds:;
- (void)setNeedMockOppositeUser:;
- (void)setOppositeTeamLinkmicIdArray:;
- (void)setOwnTeamUserIds:;
- (void).cxx_destruct;
@end
