@interface AWEPOIDetailNGModalViewBarViewModel : DitoComponentViewModel
@property (nonatomic) BOOL shouldHide;
@property (nonatomic) BOOL isContainerMaxUnfold;
@property (nonatomic) BOOL isInUnfoldCollapse;
@property (nonatomic) AWEPOIDetailNGModalViewBar componentView;
- (id)componentSizeWithMaxWidth:;
- (void)didHalfContainerOffsetChange:offset:;
- (void)halfContainerMaxUnfoldState:isInUnfoldCollapse:;
- (void)halfContainerEndPullCollapse:isCollapsed:duration:;
- (void)vsdContainer:offsetChange:;
- (void)setIsContainerMaxUnfold:;
- (void)setIsInUnfoldCollapse:;
- (void)updateStatusInMaxUnfold;
- (BOOL)isContainerMaxUnfold;
- (BOOL)isInUnfoldCollapse;
- (void)changeAlphaWithOffset:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)componentView;
- (void)setComponentView:;
- (void)setShouldHide:;
- (BOOL)shouldHide;
@end
