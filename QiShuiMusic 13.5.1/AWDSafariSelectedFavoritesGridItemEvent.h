@interface AWDSafariSelectedFavoritesGridItemEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRow;
@property (nonatomic) Q row;
@property (nonatomic) BOOL hasItemsPerRow;
@property (nonatomic) Q itemsPerRow;
@property (nonatomic) BOOL hasSectionIndex;
@property (nonatomic) Q sectionIndex;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasDisplayContext;
@property (nonatomic) NSInteger displayContext;
@property (nonatomic) BOOL hasSection;
@property (nonatomic) NSInteger section;
- (int)StringAsType:;
- (void)setType:;
- (void)writeTo:;
- (unsigned long long)row;
- (void)setHasType:;
- (BOOL)hasType;
- (void)setSection:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (int)type;
- (BOOL)hasSection;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (int)section;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)displayContext;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:;
- (void)setItemsPerRow:;
- (unsigned long long)itemsPerRow;
- (void)setRow:;
- (void)setDisplayContext:;
- (void)setHasRow:;
- (BOOL)hasRow;
- (void)setHasItemsPerRow:;
- (BOOL)hasItemsPerRow;
- (void)setHasSectionIndex:;
- (BOOL)hasSectionIndex;
- (void)setHasDisplayContext:;
- (BOOL)hasDisplayContext;
- (id)displayContextAsString:;
- (int)StringAsDisplayContext:;
- (void)setHasSection:;
- (id)sectionAsString:;
- (int)StringAsSection:;
@end
