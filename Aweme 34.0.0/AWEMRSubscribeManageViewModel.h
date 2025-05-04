@interface AWEMRSubscribeManageViewModel : AWEMRSubscribeManageBaseViewModel
@property (nonatomic) AWEMRSubscribeManageDataContext dataContext;
@property (nonatomic) AWEMRSubscribeManageTracker tracker;
- (void)fetchListData;
- (id)dataContext;
- (void)setDataContext:;
- (void)updateSectionVMs;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
