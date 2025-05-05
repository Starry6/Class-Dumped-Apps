@interface LNMessageConversation : NSObject
@property (nonatomic) NSString messageConversationIdentifier;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSArray recipients;
- (id)recipients;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)groupName;
- (id)copyWithZone:;
- (id)initWithMessageConversationIdentifier:groupName:recipients:;
- (id)messageConversationIdentifier;
+ (BOOL)supportsSecureCoding;
@end
