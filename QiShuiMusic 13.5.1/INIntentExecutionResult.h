@interface INIntentExecutionResult : NSObject
@property (nonatomic) INIntent intent;
@property (nonatomic) INIntentResponse intentResponse;
- (id)intent;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)intentResponse;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIntent:response:;
+ (BOOL)supportsSecureCoding;
@end
