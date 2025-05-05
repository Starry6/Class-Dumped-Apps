@interface INSettingDevice : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) q deviceCategory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceModel;
- (id)deviceName;
- (id)_dictionaryRepresentation;
- (long long)deviceCategory;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDeviceName:deviceModel:deviceCategory:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
