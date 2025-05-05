@interface AFSiriHomeAutomationRequestInfo : NSObject
@property (nonatomic) NSData context;
- (id)context;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (void)encodeWithCoder:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
