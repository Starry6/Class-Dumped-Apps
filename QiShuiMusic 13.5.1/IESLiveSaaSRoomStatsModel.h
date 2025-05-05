@interface IESLiveSaaSRoomStatsModel : BDDynamicMTLModel
@property (nonatomic) NSNumber money;
@property (nonatomic) NSNumber statsId;
@property (nonatomic) NSNumber fanTicket;
@property (nonatomic) NSNumber totalUser;
@property (nonatomic) NSNumber watermelon;
@property (nonatomic) NSNumber enterCount;
@property (nonatomic) NSString totalUserDesp;
@property (nonatomic) NSString totalUserStr;
@property (nonatomic) NSString userCountStr;
@property (nonatomic) NSString upRightStatsStr;
@property (nonatomic) NSString upRightStatsStrComplete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTotalUserStr:;
- (void)setUserCountStr:;
- (id)totalUserStr;
- (id)userCountStr;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
