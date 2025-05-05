@interface PFUbiquityRecordImportConflict : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:withValue:withGlobalIDToLocalIDURIMap:andTransactionLog:;
@end
