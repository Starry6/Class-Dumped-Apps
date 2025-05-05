@interface VCQoSMonitorManager : VCObject
@property (nonatomic) NSMutableArray moitors;
- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)registerQoSReportingSourceForToken:;
- (void)unregisterQoSReportingSourceForToken:;
- (void)updateQoSReport:toClientsWithToken:;
- (BOOL)doesQoSSourceExistForStreamToken:;
- (id)moitors;
+ (id)sharedInstance;
@end
