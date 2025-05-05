@interface INVoiceCommandDeviceInformation : NSObject
@property (nonatomic) q deviceIdiom;
@property (nonatomic) NSNumber isHomePodInUltimateMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)deviceIdiom;
- (id)isHomePodInUltimateMode;
- (id)initWithDeviceIdiom:isHomePodInUltimateMode:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
