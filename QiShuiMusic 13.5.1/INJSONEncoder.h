@interface INJSONEncoder : NSObject
@property (nonatomic) INJSONEncoderConfiguration _storedConfiguration;
@property (nonatomic) INJSONEncoderConfiguration configuration;
@property (nonatomic) NSString languageCode;
- (id)encodeObject:;
- (id)init;
- (id)_encodeObject:codableAttribute:;
- (void)setLanguageCode:;
- (id)languageCode;
- (id)encodeObject:withCodableDescription:;
- (id)_storedConfiguration;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (id)copyWithZone:;
- (id)encodeObject:withCodableAttribute:;
@end
