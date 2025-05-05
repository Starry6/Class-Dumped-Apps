@interface HTSLivePKContributeEntity : NSObject
@property (nonatomic) BattleArmy listData;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (void)setListData:;
- (void)updateWithRankList:;
- (id)listData;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end
