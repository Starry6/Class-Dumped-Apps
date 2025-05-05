@interface INTicketedEvent : NSObject
@property (nonatomic) q category;
@property (nonatomic) NSString name;
@property (nonatomic) INDateComponentsRange eventDuration;
@property (nonatomic) CLPlacemark location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)location;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (long long)category;
- (id)copyWithZone:;
- (id)eventDuration;
- (id)initWithCategory:name:eventDuration:location:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
