@interface AWEPOIDetailListCoiUtil : NSObject
@property (nonatomic) DitoPageModel pageModel;
@property (nonatomic) AWEPOIDetailListCommonUtil commonHelper;
@property (nonatomic) NSString coiTagName;
@property (nonatomic) UIViewController detailViewController;
@property (nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> context;
@property (nonatomic) BOOL isFromIsolated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageModel;
- (void)setPageModel:;
- (void)bindStateAndAction;
- (void)recordCellTagWithVM:;
- (BOOL)isFromIsolated;
- (void)setIsFromIsolated:;
- (BOOL)isHitCOITestAndShowInPoiPage;
- (id)commonHelper;
- (void)setCommonHelper:;
- (id)coiTagName;
- (void)updateCOICardDisplayStyle;
- (void)setCoiTagName:;
- (id)detailViewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setDetailViewController:;
@end
