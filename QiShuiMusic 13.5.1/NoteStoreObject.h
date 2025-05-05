@interface NoteStoreObject : NoteCollectionObject
@property (nonatomic) NSString externalIdentifier;
@property (nonatomic) NoteAccountObject account;
@property (nonatomic) NoteStoreObject parentStore;
@property (nonatomic) NSArray ancestorStores;
@property (nonatomic) NSString name;
@property (nonatomic) NSSet changes;
@property (nonatomic) NSString syncAnchor;
- (id)cacheKey;
- (id)parentStore;
- (unsigned long long)minimumSequenceNumberForServerIntIds:;
- (id)notesForServerIntIdsInRange:ascending:limit:;
- (id)notesForGUIDs:;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)collectionInfo;
- (id)notesForServerIntIdsInRange:;
- (id)basicAccountIdentifier;
- (id)ancestorStores;
- (id)notesForIntegerIds:;
- (id)searchDomainIdentifier;
- (id)predicateForNotes;
- (id)notesForServerIds:;
- (id)notesForServerIntIds:ascending:limit:;
- (id)titleForTableViewCell;
- (id)notesForServerIntIds:;
- (unsigned int)maximumServerIntId;
@end
