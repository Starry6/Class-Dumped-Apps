@interface FLEXFileBrowserTableViewCell : UITableViewCell
- (void)forwardAction:withSender:;
- (void)fileBrowserRename:;
- (void)fileBrowserDelete:;
- (void)fileBrowserCopyPath:;
- (void)fileBrowserShare:;
@end
