@interface AWEIMCommonTopFloatViewConfig : NSObject
@property (nonatomic) NSString tipsText;
@property (nonatomic) NSString actionButtonText;
@property (nonatomic) UIImage actionButtonIcon;
@property (nonatomic) UIImage closeButtonIcon;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)setActionButtonText:;
- (id)tipsText;
- (void)setTipsText:;
- (void)setActionButtonIcon:;
- (void)setCloseButtonIcon:;
- (id)closeButtonIcon;
- (id)actionButtonIcon;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)actionButtonText;
@end
