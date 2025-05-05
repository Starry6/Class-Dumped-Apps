@interface CLPPrivacySanitization : PBCodable
@property (nonatomic) BOOL hasTripSegmentType;
@property (nonatomic) NSInteger tripSegmentType;
@property (nonatomic) NSString version;
- (void)setVersion:;
- (id)version;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)tripSegmentType;
- (void)setTripSegmentType:;
- (void)setHasTripSegmentType:;
- (BOOL)hasTripSegmentType;
- (id)tripSegmentTypeAsString:;
- (int)StringAsTripSegmentType:;
@end
