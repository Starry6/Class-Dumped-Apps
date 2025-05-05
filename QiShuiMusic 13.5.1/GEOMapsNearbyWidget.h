@interface GEOMapsNearbyWidget : PBCodable
@property (nonatomic) BOOL hasServerMetadata;
@property (nonatomic) GEOMapsServerMetadata serverMetadata;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) NSInteger tappedItemIndex;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)serverMetadata;
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
- (int)tappedItemIndex;
- (void)setTappedItemIndex:;
- (void)setHasTappedItemIndex:;
- (BOOL)hasTappedItemIndex;
- (BOOL)hasServerMetadata;
- (void)setServerMetadata:;
+ (BOOL)isValid:;
@end
