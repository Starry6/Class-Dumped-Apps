@interface CPLSuggestionMemory : PBCodable
@property (nonatomic) BOOL hasMemoryIdentifier;
@property (nonatomic) NSString memoryIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) I type;
@property (nonatomic) BOOL hasFeature;
@property (nonatomic) I feature;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) NSString context;
- (void)setFeature:;
- (unsigned int)feature;
- (BOOL)hasContext;
- (id)context;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (unsigned int)type;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setContext:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasFeature;
- (void)setMemoryIdentifier:;
- (id)memoryIdentifier;
- (void)setHasFeature:;
- (BOOL)hasMemoryIdentifier;
@end
