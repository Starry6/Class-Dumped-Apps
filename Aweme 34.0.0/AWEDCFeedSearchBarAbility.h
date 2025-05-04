@interface AWEDCFeedSearchBarAbility : NSObject
@property (nonatomic) AWEDCFeedPageContext context;
- (void)trigerSearchMagnifierClick;
- (void)setSearchBarAlpha:;
- (void)showSeparatorView:;
- (id)classNameWithReferString;
- (void)setSearchBarPlaceHolderText:;
- (void)trigerSearchBarClick;
- (void)trigerSearchButtonClick;
- (void)trigerFetchGuessWord;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
