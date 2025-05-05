@interface GEOLogMsgStateMapRestore : PBCodable
@property (nonatomic) NSMutableArray targetLayouts;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)targetLayouts;
- (void)setTargetLayouts:;
- (void)clearTargetLayouts;
- (void)addTargetLayout:;
- (unsigned long long)targetLayoutsCount;
- (id)targetLayoutAtIndex:;
+ (BOOL)isValid:;
+ (Class)targetLayoutType;
@end
