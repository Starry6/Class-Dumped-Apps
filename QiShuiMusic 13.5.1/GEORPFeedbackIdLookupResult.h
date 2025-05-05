@interface GEORPFeedbackIdLookupResult : PBCodable
@property (nonatomic) NSMutableArray feedbackInfos;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)feedbackInfos;
- (void)setFeedbackInfos:;
- (void)clearFeedbackInfos;
- (void)addFeedbackInfo:;
- (unsigned long long)feedbackInfosCount;
- (id)feedbackInfoAtIndex:;
+ (BOOL)isValid:;
+ (Class)feedbackInfoType;
@end
