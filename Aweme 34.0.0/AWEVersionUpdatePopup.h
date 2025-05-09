@interface AWEVersionUpdatePopup : NSObject
@property (nonatomic) AWEVersionUpdateConfigModel config;
@property (nonatomic) UIViewController dialog;
@property (nonatomic) UIImage image;
@property (nonatomic) <AWEVersionUpdatePopupDelegate> delegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickCloseButton:;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)dismissWithAnimated:;
- (void)closeBtnDidClick;
- (void)prepareResourceWithCompletion:;
- (void)cancelBtnDidClick;
- (void)showDialog;
- (void)confirmBtnDidClick;
- (void)p_showDialog;
- (void)p_showInfoPanel;
- (void)operateWithType:;
- (void)setConfig:;
- (BOOL)isShowing;
- (id)image;
- (id)delegate;
- (id)initWithConfig:;
- (void)setImage:;
- (id)config;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)dialog;
- (void)setDialog:;
- (void)showInfoPanel;
+ (id)showWithConfig:;
@end
