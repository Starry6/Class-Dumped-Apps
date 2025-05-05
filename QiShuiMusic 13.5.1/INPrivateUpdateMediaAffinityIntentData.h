@interface INPrivateUpdateMediaAffinityIntentData : NSObject
@property (nonatomic) INPrivateMediaIntentData privateMediaIntentData;
@property (nonatomic) NSArray internalSignals;
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
- (id)internalSignals;
- (id)privateMediaIntentData;
- (void)setPrivateMediaIntentData:;
- (id)initWithPrivateMediaIntentData:internalSignals:;
- (id)initWithPrivateMediaIntentData:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
