@interface GEOLogMsgEventPeriodicSettingsSummary : PBCodable
@property (nonatomic) BOOL hasMapSettings;
@property (nonatomic) GEOLogMsgStateMapSettings mapSettings;
@property (nonatomic) BOOL hasMapUiShown;
@property (nonatomic) GEOLogMsgStateMapUIShown mapUiShown;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL workFavoriteSet;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) I favoritesCount;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (nonatomic) I personalCollectionsCount;
@property (nonatomic) BOOL hasElectricVehicleCount;
@property (nonatomic) I electricVehicleCount;
@property (nonatomic) BOOL hasLicensePlateCount;
@property (nonatomic) I licensePlateCount;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (nonatomic) BOOL hasAccount;
@property (nonatomic) GEOLogMsgStateAccount account;
@property (nonatomic) BOOL hasDeviceConnection;
@property (nonatomic) GEOLogMsgStateDeviceConnection deviceConnection;
@property (nonatomic) BOOL hasMapsUserSettings;
@property (nonatomic) GEOLogMsgStateMapsUserSettings mapsUserSettings;
@property (nonatomic) BOOL hasRoutingSettings;
@property (nonatomic) GEOLogMsgStateRoutingSettings routingSettings;
@property (nonatomic) BOOL hasMapsFeatures;
@property (nonatomic) GEOLogMsgStateMapsFeatures mapsFeatures;
@property (nonatomic) BOOL hasDeviceSettings;
@property (nonatomic) GEOLogMsgStateDeviceSettings deviceSettings;
- (id)account;
- (void)setDeviceSettings:;
- (BOOL)hasMapsFeatures;
- (id)mapsFeatures;
- (id)deviceSettings;
- (BOOL)hasAccount;
- (id)mapUiShown;
- (BOOL)hasMapUiShown;
- (void)setMapSettings:;
- (BOOL)hasMapsUserSettings;
- (BOOL)hasDeviceConnection;
- (BOOL)hasDeviceSettings;
- (void)setRoutingSettings:;
- (void)setMapsUserSettings:;
- (void)setMapUiShown:;
- (id)mapSettings;
- (BOOL)hasMapSettings;
- (void)setMapsFeatures:;
- (void)readAll:;
- (id)deviceConnection;
- (id)routingSettings;
- (void)setNotificationsEnabled:;
- (void)setDeviceConnection:;
- (id)mapsUserSettings;
- (void)setHasPersonalCollectionsCount:;
- (BOOL)hasHomeFavoriteSet;
- (void)setHasLicensePlateCount:;
- (unsigned int)personalCollectionsCount;
- (id)init;
- (void)setHomeFavoriteSet:;
- (void)setLicensePlateCount:;
- (BOOL)hasFavoritesCount;
- (void)setAccount:;
- (unsigned int)favoritesCount;
- (unsigned int)licensePlateCount;
- (BOOL)homeFavoriteSet;
- (BOOL)notificationsEnabled;
- (BOOL)workFavoriteSet;
- (void)setHasHomeFavoriteSet:;
- (BOOL)hasNotificationsEnabled;
- (void)setHasWorkFavoriteSet:;
- (id)initWithJSON:;
- (BOOL)hasPersonalCollectionsCount;
- (void)setFavoritesCount:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned int)electricVehicleCount;
- (void)setHasElectricVehicleCount:;
- (void)setHasNotificationsEnabled:;
- (unsigned long long)hash;
- (void)setHasFavoritesCount:;
- (BOOL)siriSuggestionsEnabled;
- (void)copyTo:;
- (BOOL)hasRoutingSettings;
- (BOOL)learnFromAppEnabled;
- (void)mergeFrom:;
- (BOOL)hasLearnFromAppEnabled;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)setWorkFavoriteSet:;
- (void)setLearnFromAppEnabled:;
- (BOOL)readFrom:;
- (void)setPersonalCollectionsCount:;
- (void)setHasLearnFromAppEnabled:;
- (id)description;
- (void)setHasSiriSuggestionsEnabled:;
- (id)dictionaryRepresentation;
- (void)setElectricVehicleCount:;
- (BOOL)hasWorkFavoriteSet;
- (void)setSiriSuggestionsEnabled:;
- (BOOL)hasLicensePlateCount;
- (BOOL)isEqual:;
- (BOOL)hasSiriSuggestionsEnabled;
- (id)copyWithZone:;
- (BOOL)hasElectricVehicleCount;
+ (BOOL)isValid:;
@end
