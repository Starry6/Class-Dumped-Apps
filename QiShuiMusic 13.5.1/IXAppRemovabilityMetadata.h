@interface IXAppRemovabilityMetadata : NSObject
@property (nonatomic) Q removability;
@property (nonatomic) Q client;
- (id)initWithMetadataDictionary:;
- (unsigned long long)hash;
- (id)initWithRemovability:client:;
- (unsigned long long)client;
- (id)description;
- (unsigned long long)removability;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
