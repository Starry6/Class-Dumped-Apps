@interface ACProtobufDate : PBCodable
@property (nonatomic) NSDate date;
@property (nonatomic) double value;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)initWithDate:;
- (void)copyTo:;
- (id)date;
- (void)mergeFrom:;
- (void)setValue:;
- (BOOL)readFrom:;
- (void)setDate:;
- (id)description;
- (double)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
