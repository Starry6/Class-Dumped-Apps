@interface AWEPOIAwemeStatusSyncUtil : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) BOOL hasDetailVC;
- (void)setHasDetailVC:;
- (void)didReceiveLifeStoreAwemeStatusChange:key:;
- (void)didReceiveAwemeDiggStatusChange:;
- (BOOL)hasDetailVC;
- (void)didReceiveSingleAwemeDiggStatusChange:withItemID:;
- (void)handleDiggWithItemID:originItemID:isDigg:onDiggSuccess:onDiggError:;
- (id)init;
- (void)dealloc;
- (void)setHandle:;
- (id)handle;
- (void).cxx_destruct;
@end
