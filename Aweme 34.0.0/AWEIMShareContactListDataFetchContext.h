@interface AWEIMShareContactListDataFetchContext : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString sharePanelScene;
@property (nonatomic) NSMutableSet abnormalList;
@property (nonatomic) BOOL abnormalDatabase;
- (id)aweme;
- (void)setAweme:;
- (id)sharePanelScene;
- (id)abnormalList;
- (void)setAbnormalList:;
- (void)setAbnormalDatabase:;
- (BOOL)abnormalDatabase;
- (void)setSharePanelScene:;
- (void).cxx_destruct;
@end
