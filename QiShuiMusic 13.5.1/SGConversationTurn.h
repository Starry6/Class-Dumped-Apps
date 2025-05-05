@interface SGConversationTurn : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString senderID;
@property (nonatomic) NSDate timestamp;
- (id)senderID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToConversationTurn:;
- (id)initWithText:senderID:timestamp:;
+ (BOOL)supportsSecureCoding;
@end
