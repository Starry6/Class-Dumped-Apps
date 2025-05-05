@interface AWDMailError : PBCodable
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL hasGenericErrorCode;
@property (nonatomic) q genericErrorCode;
- (BOOL)hasErrorCode;
- (int)errorCode;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)errorCodeAsString:;
- (int)StringAsErrorCode:;
- (void)setGenericErrorCode:;
- (void)setHasGenericErrorCode:;
- (BOOL)hasGenericErrorCode;
- (long long)genericErrorCode;
@end
