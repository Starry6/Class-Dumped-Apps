@interface MFDAFolderChangeConsumer : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)waitForResult;
- (void)folderChange:finishedWithStatus:error:;
@end
