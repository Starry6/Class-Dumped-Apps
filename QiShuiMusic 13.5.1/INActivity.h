@interface INActivity : NSObject
@property (nonatomic) NSString activityType;
@property (nonatomic) NSArray activityDescriptors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityType;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)activityDescriptors;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (id)initWithActivityType:activityDescriptors:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
