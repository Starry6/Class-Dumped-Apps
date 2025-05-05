@interface DSNSHelperContext : NSObject
- (void)dealloc;
- (id)initWithOptions:delegate:;
- (BOOL)launchDesktopServicesHelper:;
- (BOOL)createLockNamed:destinationURL:sourceURL:groupUUID:isDuplication:groupCount:clonedInstead:error:;
- (unsigned long long)resolveConflictAtURL:withStrategy:;
- (BOOL)createLockInDestinationURL:sourceURL:groupUUID:groupCount:conflictStrategy:isDuplication:clonedInstead:resultName:error:;
- (BOOL)copyRootMetadataAtURL:toDestinationURL:targetName:error:;
- (BOOL)sizeURL:destinationURL:targetName:coordinate:spaceNeeds:groupUUID:error:;
- (BOOL)ensureFreeSpace:onVolume:error:;
- (void)clearCopyStateForSources:destination:targetNames:groupUUID:;
- (BOOL)preflightAndCloneIfPossible:toURL:groupUUID:sourceURLsToCopy:isDuplication:targetNames:maxFileSize:conflictStrategy:receiveTargets:error:;
- (void)stopAccessingURLs:;
- (BOOL)copyItemsAtURLs:toURL:options:conflictStrategy:receiveTargets:error:;
@end
