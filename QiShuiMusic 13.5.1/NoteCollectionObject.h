@interface NoteCollectionObject : NSManagedObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isAllNotesContainer;
- (id)cacheKey;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForSearchableNotes;
- (id)collectionInfo;
- (id)predicateForSearchableAttachments;
- (BOOL)supportsVisibilityTestingType:;
- (id)basicAccountIdentifier;
- (BOOL)isAllNotesContainer;
- (id)searchDomainIdentifier;
- (id)predicateForNotes;
- (BOOL)isTitleValid:error:;
- (id)titleForTableViewCell;
@end
