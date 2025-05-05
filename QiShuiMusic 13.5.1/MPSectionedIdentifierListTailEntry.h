@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry
@property (nonatomic) MPSectionedIdentifierListHeadEntry sectionHeadEntry;
@property (nonatomic) NSString sectionIdentifier;
@property (nonatomic) q branchDepth;
@property (nonatomic) q entryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)entryType;
- (void).cxx_destruct;
- (id)previousEntry;
- (id)sectionHeadEntry;
- (void)setSectionHeadEntry:;
+ (id)tailEntryWithSectionHeadEntry:;
@end
