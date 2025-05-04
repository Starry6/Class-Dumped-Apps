@interface AWEVideoCoverEditorTextStyleCell : UIView
@property (nonatomic) AWEVideoCoverEditorTextFaceViewController textTypeFaceController;
@property (nonatomic) AWEVideoCoverEditorTextFontViewController textFontController;
@property (nonatomic) <AWEVideoCoverEditorTextStyleCellDelegate> delegate;
- (void)updateSelectStatusWithColor:style:alignment:;
- (void)updateSelectStatusWithFont:;
- (void)clearStyleSelectStatus;
- (void)clearFontSelectStatus;
- (id)textTypeFaceController;
- (void)setTextTypeFaceController:;
- (void)disableFontView;
- (void)resetFontView;
- (id)textFontController;
- (void)setTextFontController:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
