@interface AWDNWDurationAccumulation : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray states;
- (id)states;
- (void)dealloc;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
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
