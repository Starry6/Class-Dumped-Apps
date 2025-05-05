@interface CLPPressure : PBCodable
@property (nonatomic) double timestamp;
@property (nonatomic) double value;
@property (nonatomic) double std;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setValue:;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (double)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setStd:;
- (double)std;
@end
