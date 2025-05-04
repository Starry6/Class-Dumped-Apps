@interface AWEDitoPOIFavoriteEnterTitleComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEDitoPOIFavoriteEnterTitleComponentView cell;
@property (nonatomic) NSString guideTitle;
@property (nonatomic) NSString guideText;
- (id)guideText;
- (void)setGuideText:;
- (id)guideTitle;
- (void)setGuideTitle:;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)didTapEnterLabel;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
@end
