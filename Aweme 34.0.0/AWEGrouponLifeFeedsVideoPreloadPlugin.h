@interface AWEGrouponLifeFeedsVideoPreloadPlugin : AWEGrouponLifeFeedsBasePlugin
@property (nonatomic) NSMutableSet nodeTagSet;
@property (nonatomic) <AWEHttpTask> currentRequestTask;
- (id)currentRequestTask;
- (void)setCurrentRequestTask:;
- (void)bindPageViewModel:incrementNodeTags:;
- (id)nodeTagSet;
- (void)setNodeTagSet:;
- (void)requestAwemeWithParamDict:requestVMList:;
- (void).cxx_destruct;
@end
