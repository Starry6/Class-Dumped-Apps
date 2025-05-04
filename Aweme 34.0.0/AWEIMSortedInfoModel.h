@interface AWEIMSortedInfoModel : MTLModel
@property (nonatomic) NSString secUid;
@property (nonatomic) q conversationID;
@property (nonatomic) NSInteger type;
@property (nonatomic) q bizType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (long long)bizType;
- (void)setBizType:;
- (void)setSecUid:;
- (id)initWithConversationId:;
- (id)initWithBizType:;
- (id)initWithSecUid:;
- (int)type;
- (long long)conversationID;
- (void)setType:;
- (void).cxx_destruct;
- (void)setConversationID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
