@interface AWDITesterTestShare : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasShareMethod;
@property (nonatomic) NSString shareMethod;
@property (nonatomic) BOOL hasShareOption;
@property (nonatomic) NSString shareOption;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)shareMethod;
- (void)setShareMethod:;
- (BOOL)hasShareMethod;
- (BOOL)hasShareOption;
- (id)shareOption;
- (void)setShareOption:;
@end
