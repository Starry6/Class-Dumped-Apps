@interface CTCAConversationState : NSObject
@property (nonatomic) q requestReason;
@property (nonatomic) NSNumber conversationId;
@property (nonatomic) BOOL committed;
- (void)setCommitted:;
- (void)setRequestReason:;
- (long long)requestReason;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)conversationId;
- (void)setConversationId:;
- (BOOL)committed;
+ (BOOL)supportsSecureCoding;
@end
