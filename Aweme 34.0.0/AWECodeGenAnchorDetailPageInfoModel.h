@interface AWECodeGenAnchorDetailPageInfoModel : AWEBaseDataModel
@property (nonatomic) NSInteger panelHeight;
@property (nonatomic) NSString detailPageTitle;
@property (nonatomic) NSString detailPageDesc;
@property (nonatomic) NSString lynxInfo;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString navTitle;
- (int)panelHeight;
- (void)setPanelHeight:;
- (id)detailPageTitle;
- (id)detailPageDesc;
- (id)lynxInfo;
- (void)setDetailPageTitle:;
- (void)setDetailPageDesc:;
- (void)setLynxInfo:;
- (void).cxx_destruct;
- (void)setAppName:;
- (id)appName;
- (id)navTitle;
- (void)setNavTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
