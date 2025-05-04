@interface AWEPOIDetailListAwemeUtil : NSObject
@property (nonatomic) AWEPOIDetailListCommonUtil commonHelper;
@property (nonatomic) NSString awemeTagName;
@property (nonatomic) UIViewController detailViewController;
@property (nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindStateAndAction;
- (void)recordCellTagWithVM:;
- (id)awemeTagName;
- (id)commonHelper;
- (void)setAwemeTagName:;
- (id)biserialAwemeSizeWithVM:;
- (id)biserialContainerSize:;
- (id)biserialCellFrameWithVM:;
- (void)setCommonHelper:;
- (id)detailViewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setDetailViewController:;
@end
