@interface IESLiveReceiverPKConnectingConfig : NSObject
@property (nonatomic) q pkMatchMode;
@property (nonatomic) NSNumber receiveRoomdId;
@property (nonatomic) BattleLinkerInviteMessageExtra inviterInfo;
@property (nonatomic) NSString tips;
@property (nonatomic) NSString theme;
- (void)setInviterInfo:;
- (void)setPkMatchMode:;
- (id)inviterInfo;
- (long long)pkMatchMode;
- (id)receiveRoomdId;
- (void)setReceiveRoomdId:;
- (id)tips;
- (void)setTheme:;
- (id)theme;
- (void)setTips:;
- (void).cxx_destruct;
@end
