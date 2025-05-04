@interface AWENewVideoCoverBatchRevertCommand : AWENewVideoCoverCommand
@property (nonatomic) AWENewVideoCoverCommandStack commandStack;
- (void)realExecute;
- (void)realUnExecute;
- (id)commandStack;
- (void)setCommandStack:;
- (void).cxx_destruct;
@end
