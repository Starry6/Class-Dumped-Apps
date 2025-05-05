@interface VisionSignalGradingEntry : PBCodable
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) NSInteger count;
- (void)setCount:;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasIdentifier;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (int)count;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
@end
