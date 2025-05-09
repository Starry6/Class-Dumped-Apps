@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry
@property (nonatomic) NSMutableDictionary identifiersItemEntryMap;
@property (nonatomic) MPSectionedIdentifierListTailEntry tailEntry;
@property (nonatomic) MPSectionedIdentifierListItemEntry lastItemEntry;
@property (nonatomic) <MPSectionedIdentifierListDataSource> dataSource;
@property (nonatomic) BOOL shuffledHead;
@property (nonatomic) NSString sectionIdentifier;
@property (nonatomic) q branchDepth;
@property (nonatomic) q entryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSource:;
- (long long)entryType;
- (id)dataSource;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPositionKey:sectionIdentifier:;
- (id)nextEntries;
- (void)setBranchDepth:;
- (id)identifiersItemEntryMap;
- (id)tailEntry;
- (void)setTailEntry:;
- (id)lastItemEntry;
- (void)setLastItemEntry:;
- (BOOL)isShuffledHead;
- (void)setShuffledHead:;
+ (id)headEntryWithSectionIdentifier:;
@end
