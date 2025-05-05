@interface NWAWDNWDurationAccumulation : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray states;
- (id)states;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setStates:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearStates;
- (void)addStates:;
- (unsigned long long)statesCount;
- (id)statesAtIndex:;
+ (Class)statesType;
@end
