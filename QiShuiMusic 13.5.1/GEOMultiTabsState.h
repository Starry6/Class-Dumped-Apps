@interface GEOMultiTabsState : PBCodable
@property (nonatomic) BOOL hasNumberOfTabsOpen;
@property (nonatomic) I numberOfTabsOpen;
@property (nonatomic) BOOL hasCurrentTabIndex;
@property (nonatomic) I currentTabIndex;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)numberOfTabsOpen;
- (void)setNumberOfTabsOpen:;
- (void)setHasNumberOfTabsOpen:;
- (BOOL)hasNumberOfTabsOpen;
- (unsigned int)currentTabIndex;
- (void)setCurrentTabIndex:;
- (void)setHasCurrentTabIndex:;
- (BOOL)hasCurrentTabIndex;
+ (BOOL)isValid:;
@end
