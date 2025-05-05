@interface AWDWiFiNWActivityStateBin : PBCodable
@property (nonatomic) BOOL hasState;
@property (nonatomic) NSString state;
@property (nonatomic) BOOL hasResidentTime;
@property (nonatomic) Q residentTime;
- (void)dealloc;
- (void)setState:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)state;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasState;
- (void)setResidentTime:;
- (void)setHasResidentTime:;
- (BOOL)hasResidentTime;
- (unsigned long long)residentTime;
@end
