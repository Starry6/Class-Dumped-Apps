@interface AWECoverEditorTextSwitchCollectionViewFontCell : UIView
@property (nonatomic) ACCTextStyleViewController textStyleController;
@property (nonatomic) <AWECoverEditorTextSwitchCollectionViewFontCellDelegate> delegate;
- (void)updateSelectStatusWithFont:;
- (void)clearFontSelectStatus;
- (id)textStyleController;
- (void)setTextStyleController:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
