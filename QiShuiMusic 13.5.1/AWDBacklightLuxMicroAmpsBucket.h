@interface AWDBacklightLuxMicroAmpsBucket : PBCodable
@property (nonatomic) BOOL hasBucketDuration;
@property (nonatomic) I bucketDuration;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setBucketDuration:;
- (void)setHasBucketDuration:;
- (BOOL)hasBucketDuration;
- (unsigned int)bucketDuration;
@end
