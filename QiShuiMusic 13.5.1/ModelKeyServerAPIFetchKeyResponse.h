@interface ModelKeyServerAPIFetchKeyResponse : PBCodable
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) ModelKeyServerAPIFetchKeyResult success;
@property (nonatomic) BOOL hasError;
@property (nonatomic) ModelKeyServerAPIResultError error;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) NSInteger result;
- (int)result;
- (BOOL)hasError;
- (void)setError:;
- (void)writeTo:;
- (id)error;
- (void)setHasResult:;
- (unsigned long long)hash;
- (id)success;
- (void)setSuccess:;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasResult;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasSuccess;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setResult:;
- (id)copyWithZone:;
- (id)resultAsString:;
- (int)StringAsResult:;
- (void)clearOneofValuesForResult;
@end
