@interface AWESpecialCardCancelSubscribeSheet : NSObject
@property (nonatomic) AWESpecialCardCancelSubscribeSheetConfig config;
@property (nonatomic) DUXActionSheet cancelSheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showOnViewController:completion:;
- (void)actionSheetDidClickMaskArea:;
- (void)setupSheet;
- (void)setCancelSheet:;
- (id)cancelSheet;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)dismiss:;
@end
