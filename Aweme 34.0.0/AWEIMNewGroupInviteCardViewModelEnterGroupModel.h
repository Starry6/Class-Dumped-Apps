@interface AWEIMNewGroupInviteCardViewModelEnterGroupModel : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary enterpriseTrackParams;
@property (nonatomic) NSArray addedParticipants;
- (id)enterMethod;
- (id)enterpriseTrackParams;
- (id)initWithCid:enterMethod:enterpriseTrackParams:;
- (void)updateAddedParticipants:;
- (id)conversationID;
- (void).cxx_destruct;
- (id)addedParticipants;
@end
