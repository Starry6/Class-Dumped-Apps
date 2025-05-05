@interface CalChangeHistoryCollector : NSObject
@property (nonatomic) BOOL didReset;
@property (nonatomic) BOOL hasChanges;
@property (nonatomic) NSMutableArray insertedContacts;
@property (nonatomic) NSMutableArray updatedContacts;
@property (nonatomic) NSMutableArray deletedContactIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (BOOL)hasChanges;
- (void)visitAddContactEvent:;
- (id)init;
- (void)visitDeleteContactEvent:;
- (void)visitDropEverythingEvent:;
- (void).cxx_destruct;
- (id)updatedContacts;
- (BOOL)didReset;
- (id)deletedContactIdentifiers;
- (void)setDidReset:;
- (void)setHasChanges:;
- (id)insertedContacts;
- (void)setInsertedContacts:;
- (void)setUpdatedContacts:;
- (void)setDeletedContactIdentifiers:;
@end
