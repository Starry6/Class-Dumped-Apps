@interface AWEScreenShootShareOutsidePanel : NSObject
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) AWEScreenShootShareViewModel screenShootShareVM;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissWithAnimation:completion:;
- (void)sheetDidDismiss:;
- (void)showPanelWithWithModel:canShareOutside:noQRCodeAndNoAwemeModelCheck:;
- (void)showPanelWithWithModel:canShareOutside:;
- (void)setScreenShootShareVM:;
- (id)screenShootShareVM;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:;
+ (id)shareInstance;
@end
