@interface AWDNWAccumulator : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray durations;
- (void)dealloc;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setDurations:;
- (id)durations;
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
