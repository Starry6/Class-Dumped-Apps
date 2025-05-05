@interface TUConversationReport : NSObject
@property (nonatomic) NSDate timebase;
@property (nonatomic) NSUUID conversationID;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)conversationID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)timebase;
- (id)initWithConversationID:timebase:;
- (BOOL)isEqualToConversationReport:;
+ (BOOL)supportsSecureCoding;
@end
