@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray contributingPids;
- (id)initWithDictionary:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)humanReadableType;
- (BOOL)isEqual:;
- (id)serializeableDictionaryWithShouldRedact:;
- (id)humanReadableDictionaryRepresentation;
- (id)initWithStartContinuousTime:endContinuousTime:timebaseRatio:contributingPids:;
- (BOOL)isEqualToSignpostSupportCompositorInterval:;
- (id)contributingPids;
- (void)setContributingPids:;
+ (id)serializationTypeNumber;
@end
