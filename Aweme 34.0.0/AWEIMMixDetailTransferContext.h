@interface AWEIMMixDetailTransferContext : NSObject
@property (nonatomic) AWEIMMessageConversation con;
@property (nonatomic) NSString conversationID;
@property (nonatomic) AWEIMMixImageMessage message;
@property (nonatomic) q messageID;
@property (nonatomic) NSString clientMessageID;
@property (nonatomic) BOOL enableMediaBrowser;
@property (nonatomic) @? remindFriendBlock;
@property (nonatomic) NSDictionary trackExtra;
- (id)con;
- (void)setCon:;
- (id)trackExtra;
- (void)setTrackExtra:;
- (void)setClientMessageID:;
- (id)clientMessageID;
- (void)setEnableMediaBrowser:;
- (BOOL)enableMediaBrowser;
- (id)remindFriendBlock;
- (void)setRemindFriendBlock:;
- (id)message;
- (long long)messageID;
- (id)conversationID;
- (void)setMessageID:;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setConversationID:;
@end
