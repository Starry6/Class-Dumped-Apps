@interface AWEVideoDraftExpireTimeManager : NSObject
@property (nonatomic) NSMutableArray blockMutableArray;
- (void)addRegisteredBlocks;
- (void)registerDraftExpireHandlerForPublishTask;
- (void)registerDraftExpireHandlerForOriginTextMode;
- (void)registerDraftExpireHandlerForCloseFriendMoment;
- (id)blockMutableArray;
- (void)registExtendExpireTimeBlock:;
- (long long)needDraftExpireTime:;
- (void)setBlockMutableArray:;
- (id)init;
- (void).cxx_destruct;
@end
