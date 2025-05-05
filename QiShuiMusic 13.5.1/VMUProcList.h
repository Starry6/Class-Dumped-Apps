@interface VMUProcList : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)update;
- (unsigned long long)count;
- (void)setProcInfos:;
- (void)addProcInfo:;
- (void)removeProcInfo:;
- (void)_populateFromSystem;
- (BOOL)updateFromSystem;
- (id)allProcInfos;
- (id)allPIDs;
- (id)allNames;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:;
- (id)procInfoWithPID:;
@end
