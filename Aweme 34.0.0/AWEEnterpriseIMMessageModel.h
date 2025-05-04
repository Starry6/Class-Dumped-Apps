@interface AWEEnterpriseIMMessageModel : MTLModel
@property (nonatomic) NSString secFromUid;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString convShortId;
@property (nonatomic) NSString messageId;
@property (nonatomic) NSString serverMessageId;
@property (nonatomic) q createTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secFromUid;
- (id)convShortId;
- (void)setConvShortId:;
- (id)serverMessageId;
- (void)setServerMessageId:;
- (void)setSecFromUid:;
- (long long)createTime;
- (id)messageId;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
- (void)setMessageId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
