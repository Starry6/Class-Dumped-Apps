@interface INEvent : NSObject
@property (nonatomic) NSString eventType;
@property (nonatomic) NSArray eventDescriptors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)eventType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)eventDescriptors;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEventType:eventDescriptors:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
