@interface AWEACCMultiStyleAlertSheetImpl : AWEACCMultiStyleAlertTemplateImpl
@property (nonatomic) AWESubtitleActionSheet sheetView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionSheetDidClickCancelButton:;
- (void)setSheetView:;
- (BOOL)shouldHiddenCancelForSubtitleActionSheet;
- (id)titleForSubtitleActionSheet;
- (id)buttonTextsForSubtitleActionSheet;
- (id)buttonTypesForSubtitleActionSheet;
- (id)buttonFontsForSubtitleActionSheet;
- (void)didClickedSubtitleActionSheetButtonAtIndex:;
- (id)trackerType;
- (void)show;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupView;
- (id)sheetView;
- (id)createParams;
@end
