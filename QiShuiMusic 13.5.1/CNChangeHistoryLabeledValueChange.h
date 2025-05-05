@interface CNChangeHistoryLabeledValueChange : NSObject
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSString propertyKey;
@property (nonatomic) NSString labeledValueIdentifier;
@property (nonatomic) q changeType;
- (long long)changeType;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithContactIdentifier:propertyKey:labeledValueIdentifier:changeType:;
- (id)propertyKey;
- (id)labeledValueIdentifier;
+ (BOOL)supportsSecureCoding;
@end
