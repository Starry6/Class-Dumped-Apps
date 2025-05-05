@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation
- (unsigned long long)type;
- (BOOL)_execute:;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:;
- (BOOL)_removeSource:usingTransaction:;
- (BOOL)_removePlaylistsWithPersistentIDs:fromSource:usingTransaction:;
- (BOOL)_removeRemotePlaylistsWithNoSourceUsingTransation:;
@end
