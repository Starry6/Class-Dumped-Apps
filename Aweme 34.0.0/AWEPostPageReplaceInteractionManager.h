@interface AWEPostPageReplaceInteractionManager : NSObject
@property (nonatomic) @? quitBlock;
@property (nonatomic) DUXContentSheet currentSheet;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickCloseButton:;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (id)trackParams;
- (void)setTrackParams:;
- (void)updateTrackParams:;
- (void)trackPanelShow;
- (void)trackToastShow;
- (void)showReplaceSuccessToast:;
- (void)showReplacePanelWithHighlightPOI:poiIcon:poiText:anchorIcon:anchorText:anchorSubIcon:anchorSubText:Title:subTitle:confirmBtnText:cancelBtnText:confirmBlock:cancelBlock:quitBlock:;
- (id)topViewWithHighlightPOI:poiIcon:poiText:anchorIcon:anchorText:anchorSubIcon:anchorSubText:;
- (id)panelSheetWithTopView:Title:subTitle:confirmBtnText:cancelBtnText:confirmClickBlock:cancelClickBlock:;
- (void)setQuitBlock:;
- (id)labelWithText:fontSize:;
- (id)anchorSubViewWithIcon:text:;
- (void)trackPanelClickWithClickType:;
- (id)quitBlock;
- (void).cxx_destruct;
- (id)currentSheet;
- (void)setCurrentSheet:;
@end
