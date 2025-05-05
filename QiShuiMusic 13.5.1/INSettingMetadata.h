@interface INSettingMetadata : NSObject
@property (nonatomic) NSString settingId;
@property (nonatomic) INSettingDevice targetDevice;
@property (nonatomic) INAppIdentifier targetApp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targetDevice;
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
- (id)initWithSettingId:targetDevice:targetApp:;
- (id)settingId;
- (id)targetApp;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
