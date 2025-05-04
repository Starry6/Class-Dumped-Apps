@interface AWEIMP2PMessage : NSObject
@property (nonatomic) NSString fromUid;
@property (nonatomic) NSString conversationId;
@property (nonatomic) q type;
@property (nonatomic) q createTime;
@property (nonatomic) NSDictionary ext;
- (void)setExt:;
- (id)fromUid;
- (id)initWithContentDict:;
- (void)setFromUid:;
- (long long)createTime;
- (long long)type;
- (void)setCreateTime:;
- (void)setType:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
- (id)ext;
@end
