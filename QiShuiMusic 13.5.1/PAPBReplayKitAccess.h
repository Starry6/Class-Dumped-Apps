@interface PAPBReplayKitAccess : PBCodable
@property (nonatomic) BOOL hasAccess;
@property (nonatomic) PAPBAccess access;
@property (nonatomic) BOOL hasBroadcaster;
@property (nonatomic) PAPBApplication broadcaster;
- (id)access;
- (void)writeTo:;
- (id)broadcaster;
- (unsigned long long)hash;
- (void)mergeFrom:;
- (void)setAccess:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAccess;
- (BOOL)hasBroadcaster;
- (void)setBroadcaster:;
@end
