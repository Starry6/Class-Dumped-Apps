@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem
@property (nonatomic) NSMutableSet created;
@property (nonatomic) NSMutableSet updated;
@property (nonatomic) NSMutableSet deleted;
@property (nonatomic) NSMutableSet collectionChanges;
@property (nonatomic) NSMutableSet collectionUpdates;
@property (nonatomic) ICSDateValue dtstamp;
- (id)created;
- (id)deleted;
- (id)copyParseRules;
- (void)setCreated:;
- (id)init;
- (id)updated;
- (void)setUpdated:;
- (void).cxx_destruct;
- (void)setDeleted:;
- (void)setDtstamp:;
- (id)collectionUpdates;
- (id)collectionChanges;
- (id)dtstamp;
- (void)addCreated:;
- (void)addUpdated:;
- (void)addDeleted:;
- (void)addCollectionChanges:;
- (void)addCollectionUpdates:;
- (void)setDtstampItem:;
- (void)setCollectionChanges:;
- (void)setCollectionUpdates:;
@end
