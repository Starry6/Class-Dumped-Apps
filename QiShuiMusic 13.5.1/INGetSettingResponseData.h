@interface INGetSettingResponseData : NSObject
@property (nonatomic) INSettingMetadata settingMetadata;
@property (nonatomic) INNumericSettingValue numericValue;
@property (nonatomic) q boundedValue;
@property (nonatomic) q binaryValue;
@property (nonatomic) NSString labeledValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)labeledValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (long long)binaryValue;
- (void).cxx_destruct;
- (id)numericValue;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSettingMetadata:numericValue:boundedValue:binaryValue:labeledValue:;
- (id)settingMetadata;
- (long long)boundedValue;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
