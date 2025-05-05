@interface SFHighlightBanner : SFPinnableBanner
@property (nonatomic) SLHighlight highlight;
@property (nonatomic) @? closeActionHandler;
- (void)_close;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)highlight;
- (void)themeDidChange;
- (id)initWithHighlight:;
- (id)closeActionHandler;
- (void)setCloseActionHandler:;
@end
