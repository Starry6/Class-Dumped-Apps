@interface AFRequestHandlingContext : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) NSString inputDeviceID;
@property (nonatomic) NSString inputAssistantID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)requestID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRequestID:inputDeviceID:inputAssistantID:;
- (id)inputDeviceID;
- (id)inputAssistantID;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
