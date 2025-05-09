@interface AWEUserRelationContext : NSObject
@property (nonatomic) IESIMUserModel user;
@property (nonatomic) q fromPageType;
@property (nonatomic) q prePageType;
@property (nonatomic) q channelID;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL needMarkFriends;
@property (nonatomic) q subpageType;
@property (nonatomic) BOOL needFakeFollow;
- (void)setPrePageType:;
- (void)setSubpageType:;
- (BOOL)needMarkFriends;
- (void)setReferString:;
- (long long)fromPageType;
- (BOOL)needFakeFollow;
- (long long)prePageType;
- (id)referString;
- (void)setFromPageType:;
- (void)setNeedFakeFollow:;
- (void)setNeedMarkFriends:;
- (long long)subpageType;
- (void)setUser:;
- (void)setChannelID:;
- (id)init;
- (id)itemID;
- (id)initWithBlock:;
- (void)setItemID:;
- (id)user;
- (void).cxx_destruct;
- (long long)channelID;
- (id)activityID;
- (void)setActivityID:;
+ (id)instanceWithBlock:;
@end
