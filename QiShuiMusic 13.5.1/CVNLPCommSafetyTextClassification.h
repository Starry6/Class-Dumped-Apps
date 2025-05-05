@interface CVNLPCommSafetyTextClassification : NSObject
@property (nonatomic) NSString conversationIdentifier;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) q result;
- (long long)result;
- (id)startDate;
- (id)conversationIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithConversationIdentifier:startDate:endDate:result:;
+ (BOOL)supportsSecureCoding;
@end
