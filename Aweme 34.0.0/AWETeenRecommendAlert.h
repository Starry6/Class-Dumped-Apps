@interface AWETeenRecommendAlert : NSObject
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) @? onClose;
@property (nonatomic) <AWETeenRecommendAlertDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidDismiss:;
- (void)showWithCloseCallback:;
- (id)panelImage;
- (void)onAlertViewControllerDealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)showWithCompletion:;
- (void)dismissSheet;
- (id)sheet;
- (id)onClose;
- (void)setOnClose:;
- (void)setSheet:;
@end
