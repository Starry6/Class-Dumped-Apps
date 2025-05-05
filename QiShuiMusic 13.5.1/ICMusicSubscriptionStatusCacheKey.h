@interface ICMusicSubscriptionStatusCacheKey : NSObject
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString storefrontIdentifier;
- (id)DSID;
- (id)init;
- (void)setDSID:;
- (id)phoneNumber;
- (id)stringRepresentation;
- (void)setPhoneNumber:;
- (unsigned long long)hash;
- (void)setStorefrontIdentifier:;
- (id)initWithDictionaryRepresentation:requiringDSID:;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (id)description;
- (id)initWithStringRepresentation:;
- (id)dictionaryRepresentationIncludingDSID:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
