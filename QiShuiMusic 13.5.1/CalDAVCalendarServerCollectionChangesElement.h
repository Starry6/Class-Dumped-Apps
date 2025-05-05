@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement
@property (nonatomic) q created;
@property (nonatomic) q updated;
@property (nonatomic) q deleted;
- (long long)created;
- (long long)deleted;
- (id)copyParseRules;
- (void)setCreated:;
- (id)init;
- (long long)updated;
- (void)setDeletedItem:;
- (void)setUpdated:;
- (void)setCreatedItem:;
- (void)setUpdatedItem:;
- (void)setDeleted:;
@end
