@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation
@property (nonatomic) MPModelLibraryPlaylistEditChangeRequest request;
@property (nonatomic) @? localPersistenceResponseHandler;
@property (nonatomic) @? completeResponseHandler;
- (void)execute;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (BOOL)_isCloudLibraryEnabled;
- (id)localPersistenceResponseHandler;
- (void)setLocalPersistenceResponseHandler:;
- (id)completeResponseHandler;
- (void)setCompleteResponseHandler:;
+ (id)requiredPlaylistEntryProperties;
@end
