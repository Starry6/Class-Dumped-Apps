@interface __AWERTVIMChatMessage : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
@property (nonatomic) q status;
@property (nonatomic) NSString sender;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString preferredSentIMConversationID;
@property (nonatomic) NSDictionary content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRTVChatMessage:;
- (id)preferredSentIMConversationID;
- (long long)__aweIMRTVChatMessageTypeWithRTVMessageType:;
- (id)sender;
- (id)content;
- (void)setStatus:;
- (id)identifier;
- (long long)type;
- (id)conversationID;
- (void).cxx_destruct;
- (long long)status;
@end
