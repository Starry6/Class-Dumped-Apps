@interface INReservationAction : NSObject
@property (nonatomic) q type;
@property (nonatomic) INDateComponentsRange validDuration;
@property (nonatomic) NSUserActivity userActivity;
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
- (id)userActivity;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:validDuration:userActivity:;
- (id)validDuration;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
