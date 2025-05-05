@interface MKSearchFoundationRichText : SFRichText
@property (nonatomic) @? completionHandlers;
- (id)completionHandlers;
- (void)setCompletionHandlers:;
- (void)setText:;
- (id)initWithString:;
- (void).cxx_destruct;
- (void)setFormattedTextPieces:;
- (id)initRichTextTitleWithMapItem:resultsType:;
- (void)loadRichTextWithCompletionHandler:;
- (void)_invokeCompletionHandlers;
- (BOOL)isRichTextResolved;
@end
