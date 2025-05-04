@interface AWEAddMateBatchRequest : AWESocialRelationRequest
@property (nonatomic) NSArray userList;
@property (nonatomic) NSString applyMessage;
@property (nonatomic) q fromPageType;
@property (nonatomic) q prePageType;
@property (nonatomic) q fromAction;
@property (nonatomic) q channelID;
- (id)userList;
- (void)setFromPageType:;
- (void)setPrePageType:;
- (id)applyMessage;
- (void)setApplyMessage:;
- (long long)fromAction;
- (void)setFromAction:;
- (long long)prePageType;
- (void)setUserList:;
- (long long)fromPageType;
- (void)setChannelID:;
- (long long)channelID;
- (void).cxx_destruct;
@end
