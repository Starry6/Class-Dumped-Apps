@interface PKDataDetectorView : PKDetectionView
@property (nonatomic) PKDataDetectorItem dataDetectorItem;
@property (nonatomic) NSArray allItems;
@property (nonatomic) NSDictionary dataDetectorContext;
- (id)item;
- (id)allItems;
- (id)contextMenuInteraction:previewForHighlightingMenuWithConfiguration:;
- (void)contextMenuInteraction:willPerformPreviewActionForMenuWithConfiguration:animator:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (id)dataDetectorContext;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (void)setAllItems:;
- (void)tapHandler:;
- (double)_underlineThickness;
- (id)initWithDataDetectorItem:allItems:;
- (void)_highlightWithCompletion:;
- (id)dataDetectorItem;
- (void)setDataDetectorItem:;
- (void)setDataDetectorContext:;
@end
