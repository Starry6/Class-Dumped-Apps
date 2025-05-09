@interface IDSQRProtoH3Message : PBCodable
@property (nonatomic) BOOL hasAllocbindRequest;
@property (nonatomic) IDSQRProtoAllocBindRequest allocbindRequest;
@property (nonatomic) BOOL hasAllocbindResponse;
@property (nonatomic) IDSQRProtoAllocBindResponse allocbindResponse;
@property (nonatomic) BOOL hasDiagnosticIndication;
@property (nonatomic) IDSQRProtoDiagnosticIndication diagnosticIndication;
@property (nonatomic) BOOL hasGoawayIndication;
@property (nonatomic) IDSQRProtoGoAwayIndication goawayIndication;
@property (nonatomic) BOOL hasInfoRequest;
@property (nonatomic) IDSQRProtoInfoRequest infoRequest;
@property (nonatomic) BOOL hasInfoResponse;
@property (nonatomic) IDSQRProtoInfoResponse infoResponse;
@property (nonatomic) BOOL hasParticipantupdateRequest;
@property (nonatomic) IDSQRProtoParticipantUpdateRequest participantupdateRequest;
@property (nonatomic) BOOL hasParticipantupdateResponse;
@property (nonatomic) IDSQRProtoParticipantUpdateResponse participantupdateResponse;
@property (nonatomic) BOOL hasParticipantupdateIndication;
@property (nonatomic) IDSQRProtoParticipantUpdateIndication participantupdateIndication;
@property (nonatomic) BOOL hasPlugincontrolRequest;
@property (nonatomic) IDSQRProtoPluginControlRequest plugincontrolRequest;
@property (nonatomic) BOOL hasPlugincontrolResponse;
@property (nonatomic) IDSQRProtoPluginControlResponse plugincontrolResponse;
@property (nonatomic) BOOL hasPlugincontrolIndication;
@property (nonatomic) IDSQRProtoPluginControlIndication plugincontrolIndication;
@property (nonatomic) BOOL hasErrorIndication;
@property (nonatomic) IDSQRProtoErrorIndication errorIndication;
@property (nonatomic) BOOL hasReallocateIndication;
@property (nonatomic) IDSQRProtoReallocateIndication reallocateIndication;
@property (nonatomic) BOOL hasSessioninfoRequest;
@property (nonatomic) IDSQRProtoSessionInfoRequest sessioninfoRequest;
@property (nonatomic) BOOL hasSessioninfoResponse;
@property (nonatomic) IDSQRProtoSessionInfoResponse sessioninfoResponse;
@property (nonatomic) BOOL hasSessioninfoIndication;
@property (nonatomic) IDSQRProtoSessionInfoIndication sessioninfoIndication;
@property (nonatomic) BOOL hasStatsRequest;
@property (nonatomic) IDSQRProtoStatsRequest statsRequest;
@property (nonatomic) BOOL hasStatsResponse;
@property (nonatomic) IDSQRProtoStatsResponse statsResponse;
@property (nonatomic) BOOL hasTestRequest;
@property (nonatomic) IDSQRProtoTestRequest testRequest;
@property (nonatomic) BOOL hasTestResponse;
@property (nonatomic) IDSQRProtoTestResponse testResponse;
@property (nonatomic) BOOL hasUnallocbindRequest;
@property (nonatomic) IDSQRProtoUnAllocBindRequest unallocbindRequest;
@property (nonatomic) BOOL hasUnallocbindResponse;
@property (nonatomic) IDSQRProtoUnAllocBindResponse unallocbindResponse;
@property (nonatomic) BOOL hasPutmaterialRequest;
@property (nonatomic) IDSQRProtoPutMaterialRequest putmaterialRequest;
@property (nonatomic) BOOL hasPutmaterialResponse;
@property (nonatomic) IDSQRProtoPutMaterialResponse putmaterialResponse;
@property (nonatomic) BOOL hasPutmaterialIndication;
@property (nonatomic) IDSQRProtoPutMaterialIndication putmaterialIndication;
@property (nonatomic) BOOL hasGetmaterialRequest;
@property (nonatomic) IDSQRProtoGetMaterialRequest getmaterialRequest;
@property (nonatomic) BOOL hasGetmaterialResponse;
@property (nonatomic) IDSQRProtoGetMaterialResponse getmaterialResponse;
@property (nonatomic) BOOL hasInnerMessage;
@property (nonatomic) NSInteger innerMessage;
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
- (BOOL)hasAllocbindRequest;
- (void)setAllocbindRequest:;
- (BOOL)hasAllocbindResponse;
- (void)setAllocbindResponse:;
- (BOOL)hasDiagnosticIndication;
- (void)setDiagnosticIndication:;
- (BOOL)hasGoawayIndication;
- (void)setGoawayIndication:;
- (BOOL)hasInfoRequest;
- (void)setInfoRequest:;
- (BOOL)hasInfoResponse;
- (void)setInfoResponse:;
- (BOOL)hasParticipantupdateRequest;
- (void)setParticipantupdateRequest:;
- (BOOL)hasParticipantupdateResponse;
- (void)setParticipantupdateResponse:;
- (BOOL)hasParticipantupdateIndication;
- (void)setParticipantupdateIndication:;
- (BOOL)hasPlugincontrolRequest;
- (void)setPlugincontrolRequest:;
- (BOOL)hasPlugincontrolResponse;
- (void)setPlugincontrolResponse:;
- (BOOL)hasPlugincontrolIndication;
- (void)setPlugincontrolIndication:;
- (BOOL)hasErrorIndication;
- (void)setErrorIndication:;
- (BOOL)hasReallocateIndication;
- (void)setReallocateIndication:;
- (BOOL)hasSessioninfoRequest;
- (void)setSessioninfoRequest:;
- (BOOL)hasSessioninfoResponse;
- (void)setSessioninfoResponse:;
- (BOOL)hasSessioninfoIndication;
- (void)setSessioninfoIndication:;
- (BOOL)hasStatsRequest;
- (void)setStatsRequest:;
- (BOOL)hasStatsResponse;
- (void)setStatsResponse:;
- (BOOL)hasTestRequest;
- (void)setTestRequest:;
- (BOOL)hasTestResponse;
- (void)setTestResponse:;
- (BOOL)hasUnallocbindRequest;
- (void)setUnallocbindRequest:;
- (BOOL)hasUnallocbindResponse;
- (void)setUnallocbindResponse:;
- (BOOL)hasPutmaterialRequest;
- (void)setPutmaterialRequest:;
- (BOOL)hasPutmaterialResponse;
- (void)setPutmaterialResponse:;
- (BOOL)hasPutmaterialIndication;
- (void)setPutmaterialIndication:;
- (BOOL)hasGetmaterialRequest;
- (void)setGetmaterialRequest:;
- (BOOL)hasGetmaterialResponse;
- (void)setGetmaterialResponse:;
- (int)innerMessage;
- (void)setInnerMessage:;
- (void)setHasInnerMessage:;
- (BOOL)hasInnerMessage;
- (id)innerMessageAsString:;
- (int)StringAsInnerMessage:;
- (void)clearOneofValuesForInnerMessage;
- (id)allocbindRequest;
- (id)allocbindResponse;
- (id)diagnosticIndication;
- (id)goawayIndication;
- (id)infoRequest;
- (id)infoResponse;
- (id)participantupdateRequest;
- (id)participantupdateResponse;
- (id)participantupdateIndication;
- (id)plugincontrolRequest;
- (id)plugincontrolResponse;
- (id)plugincontrolIndication;
- (id)errorIndication;
- (id)reallocateIndication;
- (id)sessioninfoRequest;
- (id)sessioninfoResponse;
- (id)sessioninfoIndication;
- (id)statsRequest;
- (id)statsResponse;
- (id)testRequest;
- (id)testResponse;
- (id)unallocbindRequest;
- (id)unallocbindResponse;
- (id)putmaterialRequest;
- (id)putmaterialResponse;
- (id)putmaterialIndication;
- (id)getmaterialRequest;
- (id)getmaterialResponse;
@end
