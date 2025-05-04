@interface AWEPlayInteractionTextLinkJumpManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (void)jumpAction;
- (void)configureWithModel:context:;
- (void)openMpUrl;
- (void)openXiguaAppIsDialogConfirm:;
- (void)noticeTappedDirectOpenAppWithDialogDefaultChecked:;
- (id)durationAndPercentParams;
- (void)oldJumpAction;
- (id)copyCommonReportParams;
- (id)directBarType;
- (void)showSheetWithViewController:sheetHeight:commonReportParams:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (void)openMpUrl:referString:;
@end
