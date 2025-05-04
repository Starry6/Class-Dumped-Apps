@interface AWEAwemeDetailCellManager : NSObject
@property (nonatomic) AWEAwemeNewDetailBlockManager blockManager;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeDetailTableViewController detailVC;
- (id)referString;
- (void)setReferString:;
- (id)detailVC;
- (void)setDetailVC:;
- (id)blockManager;
- (void)setBlockManager:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (id)identifierAndCellClassName;
- (id)identifierWithModel:;
- (BOOL)shouldAddCellIdentifierForPicoVR;
- (BOOL)enableLLMRecommendSurveyCellWithModel:;
- (void)registerToTableView:;
- (void)setupBlockManager:;
- (void).cxx_destruct;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
@end
