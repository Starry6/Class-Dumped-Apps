@interface INHomeAutomationFromEntity : NSObject
@property (nonatomic) NSString value;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithValue:type:;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
