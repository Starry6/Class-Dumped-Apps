@interface PKHashtagView : PKDetectionView
@property (nonatomic) UIView blankPreviewView;
@property (nonatomic) PKHashtagItem hashtagItem;
@property (nonatomic) <PKHashtagViewDelegate> delegate;
- (id)item;
- (void)setDelegate:;
- (id)contextMenuInteraction:previewForHighlightingMenuWithConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (id)delegate;
- (void).cxx_destruct;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)_underlineColor;
- (void)updateActivationState;
- (double)_underlineThickness;
- (id)initWithHashtagItem:inDrawing:;
- (id)hashtagItem;
- (id)blankPreviewView;
- (void)setBlankPreviewView:;
@end
