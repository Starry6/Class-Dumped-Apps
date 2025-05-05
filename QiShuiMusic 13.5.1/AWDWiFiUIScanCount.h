@interface AWDWiFiUIScanCount : PBCodable
@property (nonatomic) BOOL hasSection;
@property (nonatomic) NSString section;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) I max;
- (void)dealloc;
- (void)writeTo:;
- (void)setSection:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (unsigned int)max;
- (void)setMax:;
- (BOOL)hasSection;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)section;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasMax:;
- (BOOL)hasMax;
@end
