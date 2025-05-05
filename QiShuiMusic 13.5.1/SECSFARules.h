@interface SECSFARules : PBCodable
@property (nonatomic) NSMutableArray rules;
- (id)rules;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setRules:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearRules;
- (void)addRules:;
- (unsigned long long)rulesCount;
- (id)rulesAtIndex:;
+ (Class)rulesType;
@end
