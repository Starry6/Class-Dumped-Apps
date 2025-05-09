@interface PLJournal : NSObject
@property (nonatomic) PLJournalFile pendingSnapshotJournal;
@property (nonatomic) PLJournalFile pendingChangeJournal;
@property (nonatomic) PLJournalFile prepareMarker;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) PLJournalFile snapshotJournal;
@property (nonatomic) PLJournalFile changeJournal;
@property (nonatomic) # payloadClass;
- (id)baseURL;
- (id)metadata;
- (void).cxx_destruct;
- (BOOL)enumerateEntriesUsingBlock:decodePayload:error:;
- (id)initWithBaseURL:payloadClass:;
- (void)removeMetadata;
- (id)metadataURLPending:;
- (BOOL)_removeMetadataPending:error:;
- (BOOL)_replaceMetadataWithPendingMetadataError:;
- (id)_readMetadataPending:;
- (BOOL)_updateMetadataWithMetadata:replace:pending:error:;
- (BOOL)removeJournalFilesWithError:;
- (BOOL)_isPendingJournalAuthoritative;
- (BOOL)_recoverJournalWithError:;
- (BOOL)_prepareForSnapshotWithMode:error:;
- (BOOL)_finishSnapshotWithMode:snapshotSuccess:error:;
- (BOOL)_performSnapshotWithMode:usingNextEntryBlock:error:;
- (BOOL)prepareForCreateSnapshotWithError:;
- (BOOL)finishCreateSnapshot:error:;
- (BOOL)createSnapshotUsingNextPayloadBlock:error:;
- (BOOL)appendSnapshotUsingNextEntryBlock:error:;
- (BOOL)coalesceChangesToSnapshotWithError:;
- (BOOL)appendChangeEntries:error:;
- (BOOL)snapshotJournalFileSize:changeJournalFileSize:error:;
- (id)snapshotJournal;
- (id)changeJournal;
- (BOOL)enumeratePayloadsUsingBlock:error:;
- (unsigned long long)countOfInsertEntriesWithError:;
- (unsigned long long)currentPayloadVersionWithError:;
- (id)_payloadTooNewErrorWithPayloadVersion:;
- (Class)payloadClass;
- (id)pendingSnapshotJournal;
- (id)pendingChangeJournal;
- (id)prepareMarker;
- (BOOL)appendUpdatePayloadWithPayloadID:attributes:error:;
+ (id)journalURLForBaseURL:payloadClassId:journalType:;
+ (id)metadataURLForBaseURL:payloadClassId:pending:;
+ (id)snapshotFinishMarkerURLForBaseURL:;
+ (BOOL)createSnapshotFinishMarkerForBaseURL:error:;
+ (BOOL)removeSnapshotFinishMarkerForBaseURL:error:;
+ (BOOL)snapshotFinishMarkerExistsForBaseURL:;
+ (BOOL)recoverJournalsIfNecessaryForBaseURL:payloadClasses:error:;
+ (BOOL)createSnapshotsForBaseURL:payloadClasses:snapshotJournalBlock:error:;
+ (BOOL)appendSnapshotsForBaseURL:payloadClasses:snapshotJournalBlock:error:;
+ (BOOL)_performSnapshotsForBaseURL:snapshotMode:payloadClasses:snapshotJournalBlock:error:;
+ (BOOL)_finishFullSnapshotForBaseURL:snapshotSucceeded:snapshotMode:journals:error:;
@end
