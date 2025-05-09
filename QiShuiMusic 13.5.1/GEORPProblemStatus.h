@interface GEORPProblemStatus : PBCodable
@property (nonatomic) BOOL hasProblemId;
@property (nonatomic) NSString problemId;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasProblemState;
@property (nonatomic) NSInteger problemState;
@property (nonatomic) BOOL hasProblemResolution;
@property (nonatomic) GEORPResolution problemResolution;
@property (nonatomic) BOOL hasNotification;
@property (nonatomic) GEORPNotification notification;
@property (nonatomic) BOOL hasDetails;
@property (nonatomic) GEORPDetails details;
- (void)readAll:;
- (void)setDetails:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (id)initWithJSON:;
- (id)notification;
- (void)setCreationDate:;
- (void)setNotification:;
- (id)jsonRepresentation;
- (BOOL)hasNotification;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)details;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)creationDate;
- (BOOL)hasDetails;
- (void)setHasCreationDate:;
- (BOOL)hasCreationDate;
- (BOOL)hasProblemId;
- (id)problemId;
- (void)setProblemId:;
- (int)problemState;
- (void)setProblemState:;
- (void)setHasProblemState:;
- (BOOL)hasProblemState;
- (id)problemStateAsString:;
- (int)StringAsProblemState:;
- (BOOL)hasProblemResolution;
- (id)problemResolution;
- (void)setProblemResolution:;
+ (BOOL)isValid:;
@end
