@interface AWEProfilePhotoLibraryPickerParams : NSObject
@property (nonatomic) UIView sourceView;
@property (nonatomic) Q editorType;
@property (nonatomic) Q cropingStyle;
@property (nonatomic) UIImage coverMaskImage;
@property (nonatomic) {CGSize=dd} rato;
@property (nonatomic) @? selectedBlock;
@property (nonatomic) @? dismissedBlock;
@property (nonatomic) @? completionBlock;
- (void)setSelectedBlock:;
- (void)setEditorType:;
- (void)setCropingStyle:;
- (void)setCoverMaskImage:;
- (void)setDismissedBlock:;
- (id)dismissedBlock;
- (unsigned long long)editorType;
- (unsigned long long)cropingStyle;
- (id)coverMaskImage;
- (id)selectedBlock;
- (void)setRato:;
- (id)rato;
- (void)setSourceView:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)sourceView;
- (void).cxx_destruct;
@end
