@interface GEOTerritoryRegulatoryInfo : NSObject
@property (nonatomic) Q uniqueIdentifier;
@property (nonatomic) NSString iso3166CountryCode;
@property (nonatomic) NSString iso3166CountryCode2;
@property (nonatomic) NSString iso3166CountryCode3;
@property (nonatomic) BOOL disputed;
@property (nonatomic) NSString disputedTerritoryName;
@property (nonatomic) NSArray interestedPartyIso3166CountryCodes;
@property (nonatomic) NSArray interestedPartyIso3166CountryCodes2;
@property (nonatomic) NSArray interestedPartyIso3166CountryCodes3;
@property (nonatomic) q coastalWaters;
- (BOOL)isDisputed;
- (id)interestedPartyIso3166CountryCodes3;
- (id)interestedPartyIso3166CountryCodes2;
- (BOOL)isEqualToGEOTerritoryRegulatoryInfo:;
- (unsigned long long)uniqueIdentifier;
- (id)initWithUnsafeTerritoryData:nameDB:iso3to2Mapping:;
- (id)iso3166CountryCode3;
- (unsigned long long)hash;
- (long long)isCoastalWaters;
- (void).cxx_destruct;
- (id)disputedTerritoryName;
- (id)description;
- (id)iso3166CountryCode2;
- (id)interestedPartyIso3166CountryCodes;
- (id)iso3166CountryCode;
- (BOOL)isEqual:;
@end
