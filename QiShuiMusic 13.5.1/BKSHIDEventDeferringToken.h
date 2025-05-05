@interface BKSHIDEventDeferringToken : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_initWithIdentifier:;
- (id)init;
- (id)didFinishProtobufDecodingWithError:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:;
- (BOOL)_isIdentifierOfCAContext;
- (id)_string;
- (void).cxx_destruct;
- (id)_initWithString:;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (unsigned int)_identifierOfCAContext;
- (BOOL)_isString;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
+ (id)tokenForIdentifierOfCAContext:;
+ (id)tokenForString:;
@end
