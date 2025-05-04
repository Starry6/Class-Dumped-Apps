@interface AWELeftSideBarAppPresenterActionContext : NSObject
@property (nonatomic) NSMutableDictionary actionContextDict;
@property (nonatomic) NSMutableDictionary appDataDict;
@property (nonatomic) NSMutableDictionary highValueDict;
- (void)updateByDataAppModel:;
- (id)actionContextDict;
- (id)appDataDict;
- (id)highValueDict;
- (id)initWithDataAppModel:;
- (id)getReportSidebarUseInfo;
- (void)setActionContextDict:;
- (void)setAppDataDict:;
- (void)setHighValueDict:;
- (void).cxx_destruct;
- (id)contextForKey:;
@end
