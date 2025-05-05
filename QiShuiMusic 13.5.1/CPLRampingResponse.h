@interface CPLRampingResponse : PBCodable
@property (nonatomic) NSMutableArray responses;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)addResponse:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)responses;
- (void)setResponses:;
- (void)clearResponses;
- (unsigned long long)responsesCount;
- (id)responseAtIndex:;
+ (Class)responseType;
@end
