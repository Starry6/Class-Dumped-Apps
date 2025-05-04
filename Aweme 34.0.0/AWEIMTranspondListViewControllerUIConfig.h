@interface AWEIMTranspondListViewControllerUIConfig : NSObject
@property (nonatomic) BOOL shieldInnerPush;
@property (nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL hideLineView;
@property (nonatomic) BOOL disableResetContentOffsetWhenViewWillAppear;
@property (nonatomic) NSMutableAttributedString defaultTitleAttributedText;
- (BOOL)hideCloseButton;
- (BOOL)hideLineView;
- (BOOL)shieldInnerPush;
- (void)setShieldInnerPush:;
- (void)setHideCloseButton:;
- (void)setHideLineView:;
- (void)setDisableResetContentOffsetWhenViewWillAppear:;
- (void)setDefaultTitleAttributedText:;
- (BOOL)disableResetContentOffsetWhenViewWillAppear;
- (id)defaultTitleAttributedText;
- (void).cxx_destruct;
@end
