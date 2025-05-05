@interface DMCFileAccessRepairTool : NSObject
@property (nonatomic) NSFileManager fileManager;
- (id)fileManager;
- (BOOL)writeData:toFileAtPath:;
- (BOOL)fileNeedsRepairAtPath:;
- (BOOL)changePermissions:ofFileAtPath:;
- (id)contentsOfFileAtPath:;
- (BOOL)posixThinksFileNeedsRepairAtPath:;
- (id)createRepairToolErrorWithCode:;
- (BOOL)fileManagerThinksFileNeedsRepairAtPath:;
- (void)setFileManager:;
- (void).cxx_destruct;
- (int)accessAtPath:mode:error:;
- (id)createFileManager;
- (BOOL)repairFileAtPath:error:;
@end
