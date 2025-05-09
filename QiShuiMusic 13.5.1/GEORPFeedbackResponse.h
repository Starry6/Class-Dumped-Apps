@interface GEORPFeedbackResponse : PBCodable
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasFeedbackRequestType;
@property (nonatomic) NSInteger feedbackRequestType;
@property (nonatomic) BOOL hasFeedbackResult;
@property (nonatomic) GEORPFeedbackResult feedbackResult;
@property (nonatomic) BOOL hasDiscardLogs;
@property (nonatomic) BOOL discardLogs;
@property (nonatomic) BOOL hasAttestationNotFound;
@property (nonatomic) BOOL attestationNotFound;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (void)setStatus:;
- (id)unknownFields;
- (BOOL)hasStatus;
- (id)initWithJSON:;
- (id)statusAsString:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
- (int)feedbackRequestType;
- (void)setFeedbackRequestType:;
- (void)setHasFeedbackRequestType:;
- (BOOL)hasFeedbackRequestType;
- (id)feedbackRequestTypeAsString:;
- (int)StringAsFeedbackRequestType:;
- (BOOL)hasFeedbackResult;
- (id)feedbackResult;
- (void)setFeedbackResult:;
- (BOOL)discardLogs;
- (void)setDiscardLogs:;
- (void)setHasDiscardLogs:;
- (BOOL)hasDiscardLogs;
- (BOOL)attestationNotFound;
- (void)setAttestationNotFound:;
- (void)setHasAttestationNotFound:;
- (BOOL)hasAttestationNotFound;
+ (BOOL)isValid:;
@end
