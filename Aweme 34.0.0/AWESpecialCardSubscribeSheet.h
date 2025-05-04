@interface AWESpecialCardSubscribeSheet : NSObject
@property (nonatomic) AWESpecialCardSubscribeSheetViewController sheetViewController;
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) AWESpecialCardSubscribeSheetConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)leftButtonClick;
- (void)rightButtonClick;
- (void)setupSheetViewController:;
- (void)setSheetViewController:;
- (id)sheetViewController;
- (void)showSheetOnViewController:completion:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:;
@end
