@interface AWECoverEditorTextSwitchCollectionViewStyleCell : UIView
@property (nonatomic) ACCTextTypeFaceViewController textTypeFaceController;
@property (nonatomic) <AWECoverEditorTextSwitchCollectionViewStyleCellDelegate> delegate;
- (void)updateSelectStatusWithColor:style:alignment:;
- (void)clearStyleSelectStatus;
- (id)textTypeFaceController;
- (void)setTextTypeFaceController:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
