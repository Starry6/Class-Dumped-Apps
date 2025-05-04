@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateCommitBatchNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString userIds;
@property (nonatomic) NSString applyMessage;
@property (nonatomic) NSNumber from;
@property (nonatomic) NSNumber fromPre;
@property (nonatomic) NSNumber channelId;
@property (nonatomic) NSNumber fromAction;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)userIds;
- (void)setUserIds:;
- (id)applyMessage;
- (void)setApplyMessage:;
- (id)fromPre;
- (void)setFromPre:;
- (id)fromAction;
- (void)setFromAction:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setFrom:;
- (id)from;
- (id)channelId;
- (void)setChannelId:;
+ (id)businessURI;
@end
