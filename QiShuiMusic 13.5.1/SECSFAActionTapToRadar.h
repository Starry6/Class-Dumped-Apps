@interface SECSFAActionTapToRadar : PBCodable
@property (nonatomic) BOOL hasAlert;
@property (nonatomic) NSString alert;
@property (nonatomic) BOOL hasRadarDescription;
@property (nonatomic) NSString radarDescription;
@property (nonatomic) BOOL hasComponentName;
@property (nonatomic) NSString componentName;
@property (nonatomic) BOOL hasComponentVersion;
@property (nonatomic) NSString componentVersion;
@property (nonatomic) BOOL hasComponentID;
@property (nonatomic) NSString componentID;
- (id)alert;
- (id)componentName;
- (void)setAlert:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasAlert;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)radarDescription;
- (void)setRadarDescription:;
- (void)setComponentName:;
- (id)componentVersion;
- (void)setComponentVersion:;
- (id)componentID;
- (void)setComponentID:;
- (BOOL)hasRadarDescription;
- (BOOL)hasComponentName;
- (BOOL)hasComponentVersion;
- (BOOL)hasComponentID;
@end
