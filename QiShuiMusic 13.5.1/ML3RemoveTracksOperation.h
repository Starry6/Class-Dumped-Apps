@interface ML3RemoveTracksOperation : ML3DatabaseOperation
- (unsigned long long)type;
- (BOOL)_execute:;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:;
- (BOOL)_removeSource:usingTransaction:;
- (BOOL)_removeTracksWithPersistentIDs:fromSource:usingTransaction:;
@end
