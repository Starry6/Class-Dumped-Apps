@interface INGeographicalFeature : NSObject
@property (nonatomic) NSString geographicalFeatureType;
@property (nonatomic) NSArray geographicalFeatureDescriptors;
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
- (id)geographicalFeatureDescriptors;
- (id)geographicalFeatureType;
- (id)initWithGeographicalFeatureType:geographicalFeatureDescriptors:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
