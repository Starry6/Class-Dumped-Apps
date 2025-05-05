@interface AWDSpringBoardSOSAlertResponse : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasResponse;
@property (nonatomic) NSString response;
@property (nonatomic) BOOL hasUUID;
@property (nonatomic) NSString uUID;
- (void)dealloc;
- (BOOL)hasResponse;
- (void)setUUID:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (id)response;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setResponse:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasUUID;
- (id)uUID;
@end
