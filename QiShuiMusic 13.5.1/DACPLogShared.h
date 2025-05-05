@interface DACPLogShared : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)_array:beginsWithArray:outRemainingArray:;
- (id)_getUUIDForFolder:baseName:;
- (BOOL)_logData:UUID:startNewFile:sizeCheck:wantsCompressed:maxFileCount:outDidCreateNewFile:outNewFilePath:;
- (BOOL)_slurpToFileUUID:slurpeeFileDescriptor:prefix:suffix:startNewFile:sizeCheck:wantsCompressed:maxLogFileCount:outDidCreateNewFile:outNewFilePath:;
+ (id)shared;
@end
