@interface BMPBUserActivityMetadataTopic : PBCodable
@property (nonatomic) BOOL hasTopicIdentifier;
@property (nonatomic) NSString topicIdentifier;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) NSString title;
- (void)writeTo:;
- (void)setTitle:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasTitle;
- (id)copyWithZone:;
- (id)topicIdentifier;
- (BOOL)hasTopicIdentifier;
- (void)setTopicIdentifier:;
@end
