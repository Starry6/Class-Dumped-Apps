@interface BMPBParsecSearchTopic : PBCodable
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float score;
- (float)score;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasIdentifier;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setScore:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (id)copyWithZone:;
@end
