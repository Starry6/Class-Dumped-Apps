@interface CATInitializingServiceConnectionIDSMessage : NSObject
@property (nonatomic) NSUUID invitationIdentifier;
@property (nonatomic) <CATInitializingIDSServiceConnectionMessageContent> content;
@property (nonatomic) q messageType;
@property (nonatomic) NSDictionary dictionaryValue;
- (id)content;
- (long long)messageType;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (id)invitationIdentifier;
- (id)initWithInvitationIdentifier:content:;
+ (id)instanceWithDictionary:;
@end
