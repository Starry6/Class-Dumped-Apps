@interface C2MPError : PBCodable
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) q errorCode;
@property (nonatomic) BOOL hasErrorDescription;
@property (nonatomic) NSString errorDescription;
@property (nonatomic) BOOL hasUnderlyingError;
@property (nonatomic) C2MPError underlyingError;
- (id)errorDomain;
- (id)errorDescription;
- (BOOL)hasErrorCode;
- (long long)errorCode;
- (void)writeTo:;
- (BOOL)hasErrorDescription;
- (unsigned long long)hash;
- (void)setErrorDomain:;
- (BOOL)hasErrorDomain;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setErrorDescription:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setUnderlyingError:;
- (id)underlyingError;
- (BOOL)hasUnderlyingError;
@end
