@interface AFHomeAccessoryInfo : NSObject
@property (nonatomic) NSUUID uniqueIdentifier;
@property (nonatomic) NSUUID loggingUniqueIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString model;
@property (nonatomic) NSString roomName;
@property (nonatomic) NSString assistantIdentifier;
@property (nonatomic) BOOL isSpeaker;
@property (nonatomic) BOOL hasActiveThirdPartyMusicSubscription;
@property (nonatomic) NSString manufacturer;
@property (nonatomic) NSString categoryType;
@property (nonatomic) q schemaCategoryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (id)manufacturer;
- (id)assistantIdentifier;
- (id)init;
- (id)uniqueIdentifier;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)categoryType;
- (id)description;
- (BOOL)isSpeaker;
- (id)name;
- (id)roomName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUniqueIdentifier:loggingUniqueIdentifier:name:model:roomName:assistantIdentifier:isSpeaker:hasActiveThirdPartyMusicSubscription:manufacturer:categoryType:schemaCategoryType:;
- (id)loggingUniqueIdentifier;
- (BOOL)hasActiveThirdPartyMusicSubscription;
- (long long)schemaCategoryType;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
