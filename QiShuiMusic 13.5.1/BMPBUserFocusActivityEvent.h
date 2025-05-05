@interface BMPBUserFocusActivityEvent : PBCodable
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) NSString mode;
@property (nonatomic) BOOL hasClientID;
@property (nonatomic) NSString clientID;
- (void)writeTo:;
- (BOOL)hasMode;
- (void)setClientID:;
- (unsigned long long)hash;
- (void)setHasIsStart:;
- (void)setIsStart:;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)isStart;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)mode;
- (BOOL)hasIsStart;
- (id)clientID;
- (BOOL)isEqual:;
- (void)setMode:;
- (id)copyWithZone:;
- (BOOL)hasClientID;
@end
