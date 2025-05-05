@interface IDSMPConversationGroupSponsorPair : NSObject
@property (nonatomic) IDSMPConversationKey conversationKey;
@property (nonatomic) NSString sponsorAlias;
- (void).cxx_destruct;
- (id)sponsorAlias;
- (id)initWithConversationKey:sponsorAlias:;
- (id)conversationKey;
@end
