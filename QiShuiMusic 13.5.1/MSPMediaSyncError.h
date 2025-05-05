@interface MSPMediaSyncError : PBCodable
@property (nonatomic) BOOL hasErrorDescription;
@property (nonatomic) NSString errorDescription;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSInteger errorCode;
- (id)errorDescription;
- (BOOL)hasErrorCode;
- (int)errorCode;
- (void)writeTo:;
- (BOOL)hasErrorDescription;
- (unsigned long long)hash;
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
@end
