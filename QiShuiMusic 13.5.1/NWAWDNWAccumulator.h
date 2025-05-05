@interface NWAWDNWAccumulator : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray durations;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setDurations:;
- (id)durations;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearDurations;
- (void)addDurations:;
- (unsigned long long)durationsCount;
- (id)durationsAtIndex:;
+ (Class)durationsType;
@end
