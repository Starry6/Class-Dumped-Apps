@interface DALocalDBWatcher : NSObject
- (void)didReceiveDarwinNotification:;
- (id)init;
- (void)removeConcernedNoteParty:;
- (void)registerConcernedCalParty:forAccountID:withChangedBlock:;
- (void)noteCalDBDirChanged;
- (void)removeConcernedCalParty:forAccountID:;
- (void).cxx_destruct;
- (id)_dbInfoForAccountID:create:;
- (void)_notesChangedExternally;
- (void)_handleCalChangeNotification;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:;
- (void)setLastSavedCalSequenceNumber:forDatabaseInContainer:;
- (void)registerConcernedNoteParty:withChangedBlock:;
+ (id)_canonicalizePath:;
+ (id)sharedDBWatcher;
@end
