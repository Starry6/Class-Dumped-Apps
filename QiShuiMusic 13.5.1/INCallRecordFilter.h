@interface INCallRecordFilter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q preferredCallProvider;
@property (nonatomic) NSArray participants;
@property (nonatomic) Q callTypes;
@property (nonatomic) q callCapability;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)participants;
- (id)_dictionaryRepresentation;
- (void)_intents_updateContainerWithCache:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)preferredCallProvider;
- (unsigned long long)callTypes;
- (long long)callCapability;
- (id)initWithParticipants:callTypes:callCapability:;
- (id)initWithParticipants:callTypes:callCapability:preferredCallProvider:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
