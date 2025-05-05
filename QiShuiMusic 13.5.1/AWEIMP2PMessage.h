@interface AWEIMP2PMessage : NSObject
@property (nonatomic) NSString fromUid;
@property (nonatomic) NSString conversationId;
@property (nonatomic) q type;
@property (nonatomic) q createTime;
@property (nonatomic) NSDictionary ext;
- (id)fromUid;
- (void)setExt:;
- (id)initWithContentDict:;
- (void)setFromUid:;
- (long long)createTime;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (id)conversationId;
- (void)setConversationId:;
- (id)ext;
@end
