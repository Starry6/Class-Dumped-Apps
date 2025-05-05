@interface PKMentionView : PKDetectionView
@property (nonatomic) UIView blankPreviewView;
@property (nonatomic) NSArray possibleParticipants;
@property (nonatomic) PKMentionItem mentionItem;
@property (nonatomic) UIColor mentionColor;
@property (nonatomic) <PKMentionViewDelegate> delegate;
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
- (id)possibleParticipants;
- (void)updateActivationState;
- (double)_underlineThickness;
- (id)blankPreviewView;
- (void)setBlankPreviewView:;
- (id)initWithMentionItem:possibleParticipants:inDrawing:;
- (void)setMentionColor:;
- (id)mentionItem;
- (id)mentionColor;
- (void)setPossibleParticipants:;
@end
