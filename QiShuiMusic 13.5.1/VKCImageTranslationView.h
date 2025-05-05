@interface VKCImageTranslationView : VKCImageBaseOverlayView
@property (nonatomic) LTUIVisualTranslationView visualTranslationView;
@property (nonatomic) UIView presentationAnchorView;
@property (nonatomic) BOOL translationNeedsUpdate;
@property (nonatomic) VKCVisualSearchResult visualSearchResult;
- (id)init;
- (void)setTranslationNeedsUpdate:;
- (void)setPresentationAnchorView:;
- (id)presentationAnchorView;
- (void)setRecognitionResult:;
- (void)hideTranslationOverlay;
- (void)setVisualSearchResult:;
- (id)recognizedLines;
- (id)visualSearchResult;
- (void)checkForTranslationResultsWithCompletion:;
- (BOOL)translationNeedsUpdate;
- (void).cxx_destruct;
- (void)showTranslationOverlay;
- (id)visualTranslationView;
- (void)setVisualTranslationView:;
@end
