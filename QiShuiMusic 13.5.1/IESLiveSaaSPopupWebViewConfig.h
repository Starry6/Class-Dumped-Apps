@interface IESLiveSaaSPopupWebViewConfig : IESLiveSaaSWebViewConfig
@property (nonatomic) BOOL newCloseStyle;
@property (nonatomic) BOOL banTapMaskToClose;
@property (nonatomic) @? closeHandler;
- (BOOL)banTapMaskToClose;
- (id)closeHandler;
- (BOOL)newCloseStyle;
- (void)setBanTapMaskToClose:;
- (void)setCloseHandler:;
- (void)setNewCloseStyle:;
- (id)init;
- (void).cxx_destruct;
@end
