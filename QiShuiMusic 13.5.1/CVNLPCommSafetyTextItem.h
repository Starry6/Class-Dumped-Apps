@interface CVNLPCommSafetyTextItem : NSObject
@property (nonatomic) NSString conversationIdentifier;
@property (nonatomic) NSDate date;
@property (nonatomic) q direction;
@property (nonatomic) NSString text;
- (long long)direction;
- (id)conversationIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithConversationIdentifier:date:direction:text:;
+ (BOOL)supportsSecureCoding;
@end
