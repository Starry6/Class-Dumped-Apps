@interface GEOPlaceResult : PBCodable
@property (nonatomic) GEOPlace place;
@property (nonatomic) NSMutableArray additionalPlaces;
@property (nonatomic) BOOL hasSuggestedQuery;
@property (nonatomic) NSString suggestedQuery;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) I travelTime;
@property (nonatomic) BOOL hasTravelDistance;
@property (nonatomic) I travelDistance;
@property (nonatomic) BOOL hasTokenEntity;
@property (nonatomic) GEOAddress tokenEntity;
@property (nonatomic) BOOL hasQuad;
@property (nonatomic) NSString quad;
@property (nonatomic) NSMutableArray unmatchedStrings;
@property (nonatomic) NSMutableArray namedFeatures;
@property (nonatomic) BOOL hasRevgeoRequestTemplate;
@property (nonatomic) GEOPlaceSearchRequest revgeoRequestTemplate;
@property (nonatomic) NSMutableArray matchedTokens;
@property (nonatomic) BOOL hasFlyoverTourMuid;
@property (nonatomic) Q flyoverTourMuid;
@property (nonatomic) BOOL hasCacheControl;
@property (nonatomic) NSInteger cacheControl;
@property (nonatomic) NSMutableArray disambiguationLabels;
@property (nonatomic) NSMutableArray namedFields;
@property (nonatomic) PBUnknownFields unknownFields;
- (unsigned int)travelTime;
- (void)setTravelTime:;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (id)geoMapItem;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)place;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setPlace:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)quad;
- (void)setHasTravelTime:;
- (BOOL)hasTravelTime;
- (id)additionalPlaces;
- (void)setAdditionalPlaces:;
- (void)clearAdditionalPlaces;
- (void)addAdditionalPlace:;
- (unsigned long long)additionalPlacesCount;
- (id)additionalPlaceAtIndex:;
- (BOOL)hasSuggestedQuery;
- (id)suggestedQuery;
- (void)setSuggestedQuery:;
- (unsigned int)travelDistance;
- (void)setTravelDistance:;
- (void)setHasTravelDistance:;
- (BOOL)hasTravelDistance;
- (BOOL)hasTokenEntity;
- (id)tokenEntity;
- (void)setTokenEntity:;
- (BOOL)hasQuad;
- (void)setQuad:;
- (id)unmatchedStrings;
- (void)setUnmatchedStrings:;
- (void)clearUnmatchedStrings;
- (void)addUnmatchedString:;
- (unsigned long long)unmatchedStringsCount;
- (id)unmatchedStringAtIndex:;
- (id)namedFeatures;
- (void)setNamedFeatures:;
- (void)clearNamedFeatures;
- (void)addNamedFeature:;
- (unsigned long long)namedFeaturesCount;
- (id)namedFeatureAtIndex:;
- (BOOL)hasRevgeoRequestTemplate;
- (id)revgeoRequestTemplate;
- (void)setRevgeoRequestTemplate:;
- (id)matchedTokens;
- (void)setMatchedTokens:;
- (void)clearMatchedTokens;
- (void)addMatchedToken:;
- (unsigned long long)matchedTokensCount;
- (id)matchedTokenAtIndex:;
- (unsigned long long)flyoverTourMuid;
- (void)setFlyoverTourMuid:;
- (void)setHasFlyoverTourMuid:;
- (BOOL)hasFlyoverTourMuid;
- (int)cacheControl;
- (void)setCacheControl:;
- (void)setHasCacheControl:;
- (BOOL)hasCacheControl;
- (id)cacheControlAsString:;
- (int)StringAsCacheControl:;
- (id)disambiguationLabels;
- (void)setDisambiguationLabels:;
- (void)clearDisambiguationLabels;
- (void)addDisambiguationLabel:;
- (unsigned long long)disambiguationLabelsCount;
- (id)disambiguationLabelAtIndex:;
- (id)namedFields;
- (void)setNamedFields:;
- (void)clearNamedFields;
- (void)addNamedField:;
- (unsigned long long)namedFieldsCount;
- (id)namedFieldAtIndex:;
+ (BOOL)isValid:;
+ (Class)additionalPlaceType;
+ (Class)unmatchedStringType;
+ (Class)namedFeatureType;
+ (Class)matchedTokenType;
+ (Class)disambiguationLabelType;
+ (Class)namedFieldType;
@end
