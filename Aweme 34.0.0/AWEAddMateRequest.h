@interface AWEAddMateRequest : AWESocialRelationRequest
@property (nonatomic) AWEUserModel user;
@property (nonatomic) q actionType;
@property (nonatomic) NSString applyMessage;
@property (nonatomic) q fromPageType;
@property (nonatomic) q prePageType;
@property (nonatomic) q fromAction;
@property (nonatomic) q channelID;
- (void)setFromPageType:;
- (void)setPrePageType:;
- (id)applyMessage;
- (void)setApplyMessage:;
- (long long)fromAction;
- (void)setFromAction:;
- (long long)prePageType;
- (long long)fromPageType;
- (id)user;
- (void)setUser:;
- (long long)actionType;
- (void)setActionType:;
- (void)setChannelID:;
- (long long)channelID;
- (void).cxx_destruct;
- (id)initWithScene:;
@end
