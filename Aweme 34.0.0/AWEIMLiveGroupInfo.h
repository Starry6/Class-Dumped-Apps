@interface AWEIMLiveGroupInfo : NSObject
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic) q numberOfPeople;
@property (nonatomic) NSArray groupUsers;
@property (nonatomic) <IESIMConversationProtocol> con;
- (id)con;
- (void)setCon:;
- (id)groupUsers;
- (void)setGroupUsers:;
- (void).cxx_destruct;
- (double)lastUpdateTimestamp;
- (void)setLastUpdateTimestamp:;
- (long long)numberOfPeople;
- (void)setNumberOfPeople:;
@end
