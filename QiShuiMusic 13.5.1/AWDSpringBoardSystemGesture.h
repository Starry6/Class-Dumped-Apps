@interface AWDSpringBoardSystemGesture : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) NSString userInfo;
- (BOOL)hasUserInfo;
- (void)dealloc;
- (id)userInfo;
- (void)setType:;
- (void)writeTo:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (id)type;
- (void)setUserInfo:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
