@interface AWEECOMIMPaaSP2PMessage : NSObject
@property (nonatomic) q sendType;
@property (nonatomic) q sender;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSString content;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) q createTime;
- (void)setExt:;
- (long long)sendType;
- (void)setSendType:;
- (long long)sender;
- (void)setSender:;
- (long long)createTime;
- (id)content;
- (void)setCreateTime:;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (int)messageType;
- (id)conversationId;
- (void)setConversationId:;
- (id)ext;
+ (id)p2pMessageWithPigeonP2PMessageV2:;
@end
