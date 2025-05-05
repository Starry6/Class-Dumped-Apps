@interface AWDWiFiNWActivityTraffic : PBCodable
@property (nonatomic) BOOL hasValue;
@property (nonatomic) Q value;
@property (nonatomic) BOOL hasTraffic;
@property (nonatomic) NSInteger traffic;
- (BOOL)hasValue;
- (BOOL)hasTraffic;
- (void)writeTo:;
- (int)traffic;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)mergeFrom:;
- (void)setValue:;
- (void)setTraffic:;
- (BOOL)readFrom:;
- (id)description;
- (unsigned long long)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasTraffic:;
- (id)trafficAsString:;
- (int)StringAsTraffic:;
@end
