@interface PLPairing : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)processPairingForGroupIDs:inContext:deferredProcessingNeeded:error:;
- (BOOL)processPairingForEntireLibraryInContext:error:;
@end
