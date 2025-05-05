@interface INPlace : NSObject
@property (nonatomic) NSString placeType;
@property (nonatomic) NSString placeSubType;
@property (nonatomic) NSArray placeDescriptors;
@property (nonatomic) q personalPlaceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)placeType;
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
- (long long)personalPlaceType;
- (id)placeDescriptors;
- (id)placeSubType;
- (id)initWithPlaceType:placeSubType:placeDescriptors:personalPlaceType:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
