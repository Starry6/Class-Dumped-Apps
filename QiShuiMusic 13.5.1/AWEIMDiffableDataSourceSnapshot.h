@interface AWEIMDiffableDataSourceSnapshot : NSObject
@property (nonatomic) NSMapTable secItemMap;
@property (nonatomic) NSMutableArray sectionIdentifiers;
- (id)secItemMap;
- (void)setSecItemMap:;
- (id)init;
- (long long)numberOfItemsInSection:;
- (id)sectionIdentifiers;
- (void)appendItemsWithIdentifiers:intoSectionWithIdentifier:;
- (void)appendSectionsWithIdentifiers:;
- (id)itemIdentifiersInSectionWithIdentifier:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setSectionIdentifiers:;
@end
